#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -C *.c
ar rc liball.a *.o
