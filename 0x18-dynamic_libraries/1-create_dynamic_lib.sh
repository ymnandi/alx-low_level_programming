#!/bin/bash
gcc -fPIC -Wall -Werror -Wextra -pedantic -c -g *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
