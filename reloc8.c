#include <inttypes.h>
#include <search.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

#define PROGNAME	"reloc8"

#define NEL	4096

uint8_t *Ram;

struct Tuple {
    uint16_t offset;
    char name[256];
};
struct Tuple Tuples[NEL];

static void usage(void)
{
    (void) fprintf(stderr, "Usage: " PROGNAME " infile.ch8 < infile.rel > "
      "outfile.ch8\n");
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
    ENTRY *found_item, item;
    char s1[256], s2[256];
    size_t len;
    uint16_t w;
    uint8_t b;
    FILE *fp;
    int i;

    if (argc != 2) {
        usage();
    }

    if ( (fp = fopen(argv[1], "rb")) == NULL) {
        usage();
    }

    (void) fseek(fp, 0L, SEEK_END);
    len = (int) ftell(fp);
    rewind(fp);

    if ( (Ram = malloc(sizeof(uint8_t) * len)) == NULL) {
        /* error */
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < len; ++i) {
        Ram[i] = fgetc(fp);
    }

    (void) fclose(fp);

    for (i = 0; i < NEL; ++i) {
        Tuples[i].offset = 0;
        Tuples[i].name[0] = '\0';
    }

    (void) hcreate(NEL);

    i = 0;
    while (fscanf(stdin, "%s %s", s1, s2) != EOF) {
        if (isdigit(s1[0])) {
            Tuples[i].offset = atoi(s1);
            (void) strncpy(Tuples[i].name, s2, 255);
            Tuples[i].name[strlen(s2)] = '\0';
            ++i;
        } else {
            item.key = strdup(s1);
            item.data = (void *) atoi(s2);
            if (hsearch(item, ENTER) == NULL) {
                (void) fprintf(stderr, PROGNAME ": Entry failed");
                exit(EXIT_FAILURE);
            }
        }
    }

    while (i-- > 0) {
        if (Tuples[i].offset < 256) {
            b = Ram[Tuples[i].offset + 1];
            item.key = Tuples[i].name;
            if ( (found_item = hsearch(item, FIND)) != NULL) {
                b |= (int) found_item->data;
                Ram[Tuples[i].offset + 1] = b & 0xff;
            } else {
                /* error */
                (void) fprintf(stderr, PROGNAME ": Label not found\n");
                exit(EXIT_FAILURE);
            }
        } else {
            w = (Ram[Tuples[i].offset - 0x0200] << 8) |
              Ram[Tuples[i].offset - 0x0200 + 1];
            item.key = Tuples[i].name;
            if ( (found_item = hsearch(item, FIND)) != NULL) {
                w |= (int) found_item->data;
                Ram[Tuples[i].offset - 0x0200] = (w >> 8);
                Ram[Tuples[i].offset - 0x0200 + 1] = w & 0xff;
            } else {
                /* error */
                (void) fprintf(stderr, PROGNAME ": Label not found\n");
                exit(EXIT_FAILURE);
            }
        }
    }

    for (i = 0; i < len; ++i) {
        (void) putchar(Ram[i]);
    }

    hdestroy();
    return 0;
}
