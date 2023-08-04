#!/bin/bash
gcc -Wall -pedantic -Werror -Wextran-c *.c
ar -rc liball.a *.o
ranlib liball.a
