#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.
ar rcs liball.a *.o
