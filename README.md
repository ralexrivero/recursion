# Recursion

```c
██████╗ ███████╗ ██████╗██╗   ██╗██████╗ ███████╗██╗ ██████╗ ███╗   ██╗
██╔══██╗██╔════╝██╔════╝██║   ██║██╔══██╗██╔════╝██║██╔═══██╗████╗  ██║
██████╔╝█████╗  ██║     ██║   ██║██████╔╝███████╗██║██║   ██║██╔██╗ ██║
██╔══██╗██╔══╝  ██║     ██║   ██║██╔══██╗╚════██║██║██║   ██║██║╚██╗██║
██║  ██║███████╗╚██████╗╚██████╔╝██║  ██║███████║██║╚██████╔╝██║ ╚████║
╚═╝  ╚═╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝  ╚═╝╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═══╝
```

## environment

* Compilation flags: ```-Wall -Werror -Wextra -pedantic -std=gnu89```

## Compilation

> To compile the project, run the ```make``` command followed by the *target*

> every target is a executable with the same name as the target

### Targets

* ```pow``` pow recursion
* ```str``` print string reversed
* ```fclean``` deletes all the executables

## Usage

```bash
$ make pow
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 01-pow_recursion.c 01-main.c -o pow
$ ./pow
Result: 2.000000 pow of 3.000000 = 8.000000
```
