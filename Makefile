# targets to create executables
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
POW_SRC = 01-pow_recursion.c 01-main.c
POW_NAME = pow
POWARG_SRC = 01-pow_recursion.c 01-main_arg.c
POWARG_NAME = powarg
STR_SRC = 02-main.c 02-reverse.c
STR_NAME = str

pow:
	$(CC) $(CFLAGS) $(POW_SRC) -o $(POW_NAME)

powarg:
	$(CC) $(CFLAGS) $(POWARG_SRC) -o $(POWARG_NAME)

str:
	$(CC) $(CFLAGS) $(STR_SRC) -o $(STR_NAME)

fclean:
	$(RM) $(POW_NAME) $(POWARG_NAME) $(STR_NAME)
