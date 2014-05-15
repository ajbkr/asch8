#include <stdio.h>

int main(void)
{
    int c;

    while (scanf("%d", &c) != EOF) {
        (void) putchar(c & 0xff);
    }
    return 0;
}
