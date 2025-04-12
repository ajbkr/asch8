CHIP-8 Pseudo-Assembler
=======================

asch8 is a pseudo-assembler that targets
[CHIP-8](http://en.wikipedia.org/wiki/CHIP-8) interpreters.

### Getting Started ###

The asch8 CHIP-8 pseudo-assembler is written in an experimental stack-oriented
programming language with an English-like syntax named Hence. Hence is a
general-purpose programming language that has additionally proved itself to be
equally suitable for creating DSLs.

You will almost certainly need to edit the paths at the top of the asch8 bash
script. You may also need to download and install the latest version of Hence
from https://github.com/ajbkr/Hence

#### Basic Assembly ####

```
$ ./asch8 file
```

Do NOT specify the filename extension (.hence) in the file argument.

The asch8 executable is a bash script that effectively performs the steps
required to successfully assemble CHIP-8 source code to a binary file (with the
.ch8 filename extension). This file can then be run on your favourite CHIP-8
interpreter.

#### Examples ####

The files font4x6.hence and tomthumb.hence are provided as examples of the
CHIP-8 pseudo-assembly language accepted by this assembler.

```
$ ./asch8 font4x6
$ ./asch8 tomthumb
```

When the assembled binaries are run, you should see output identical to the
following image for font4x6:

![font4x6 output](/font4x6.gif?raw=true "font4x6 output")

And output identical to the following image for tomthumb:

![tomthumb output](/tomthumb.gif?raw=true "tomthumb output")
