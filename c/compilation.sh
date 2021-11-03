#!/usr/bin/env bash
# Compilation script for recursion
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main_pow_recursion.c 0-pow_recursion.c -o 0-recursion.out
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main_pow_recursion_argv.c 0-pow_recursion.c -o 0-recursion_argv.out
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-countdown_recursion.c 1-main_countdown_recursion.c -o countdown_recursion_argv.out
