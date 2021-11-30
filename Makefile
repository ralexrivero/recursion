# targets to create executables
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
POW_SRC = 01-pow_recursion.c 01-main.c
POW_NAME = pow
pow:
	$(CC) $(CFLAGS) $(POW_SRC) -o $(POW_NAME)

fclean:
	$(RM) $(POW_NAME)
