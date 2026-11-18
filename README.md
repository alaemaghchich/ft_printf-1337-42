*This project has been created as part of the 42 curriculum by amaghchi.*

# ft_printf

## Description

`ft_printf` is a recreation of the C standard library function `printf`. The goal of this project is to understand how formatted output works, how variable arguments are read, and how to print different types of data without using `printf`.

The project creates a static library named `libftprintf.a`. It supports the following conversions:

- `%c`: character
- `%s`: string
- `%p`: pointer address
- `%d` and `%i`: signed decimal integer
- `%u`: unsigned decimal integer
- `%x`: hexadecimal number in lowercase
- `%X`: hexadecimal number in uppercase
- `%%`: percent sign

The function writes the result to the standard output and returns the number of printed characters. It returns `-1` when an unsupported conversion is found.

## Instructions

### Requirements

- A Linux or Unix-like environment
- `cc`
- `make`

### Compile the library

From the root of the repository, run:

```bash
make
```

This command creates `libftprintf.a`.

Other available Makefile commands:

```bash
make clean
make fclean
make re
```

- `make clean` removes the object `.o` files.
- `make fclean` removes the object files and `libftprintf.a`.
- `make re` removes the project build and rebuilds it from the beginning.

### Use ft_printf in a program

Create a C file named `main.c`:

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello %s\n", "world");
	ft_printf("Number: %d\n", 42);
	return (0);
}
```

Compile and run it:

```bash
cc main.c libftprintf.a -o test
./test
```

## Algorithm and Data Structures

The function reads the format string from left to right.

1. If the current character is not `%`, it is printed with `ft_putchar`.
2. If the current character is `%`, the next character is checked.
3. `do_it` chooses the correct conversion function.
4. `va_arg` reads the matching value from the variable arguments list.
5. The conversion function prints the value and adds the number of printed characters to the total.
6. The function returns the final character count.

Variable arguments are handled with `va_list`, `va_start`, `va_arg`, and `va_end`. `va_list` keeps the position of the next argument. `va_start` prepares it, and `va_end` closes it after processing.

Fixed-size character buffers are used for hexadecimal and pointer conversions. Digits are first stored in the buffer in reverse order. They are then read backward and printed. This is useful because repeated division by 16 produces digits from right to left. The buffers are small because an unsigned 32-bit hexadecimal value needs at most eight digits, and a pointer address needs at most 16 hexadecimal digits on a 64-bit system.

Decimal numbers use division and remainder operations. `ft_rev_nbr` builds an opposite-order number, and `ft_putnbr` prints each remainder as a character. Negative integers are handled by printing `-` and changing the number to a positive `long`, which avoids overflow when reversing the minimum integer value.

The main data structure is `va_list`. No complex external data structure is needed because `ft_printf` processes the format string one character at a time. Fixed-size buffers are enough for the supported number conversions.

## Features

- Prints characters, strings, signed integers, unsigned integers, pointers, and hexadecimal values.
- Supports both lowercase and uppercase hexadecimal output.
- Prints `(null)` for a null string.
- Prints `(nil)` for a null pointer.
- Counts and returns the number of printed characters.

## Resources

- **NotebookLM:** Used to organize and review project information.
- **ISO C `printf` Documentation:** Used to understand how `printf` formatting works.
- **`<stdarg.h>` Documentation:** Used to learn how variable arguments work in C.
- **YouTube:** Used to watch tutorials and learn about the `ft_printf` project.
- **AI / LLMs:** Used to help explain the project and organize this README.

### AI usage

AI was used to help write and organize this README so that the project goal, build instructions, supported conversions, algorithm, and resources are easy to understand. AI was not used to implement the conversion functions or change the source code.
