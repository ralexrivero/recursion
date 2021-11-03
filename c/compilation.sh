#!/usr/bin/env bash
# Compilation script for recursion
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main_pow_recursion.c 0-pow_recursion.c -o 0-recursion.out
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main_pow_recursion_argv.c 0-pow_recursion.c -o 0-recursion_argv.out