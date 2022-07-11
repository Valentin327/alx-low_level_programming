#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared -fPIC -o liball.so *.o
