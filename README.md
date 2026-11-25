*This project has been created as part of the 42 curriculum by amaghchi.*

# ft_printf
p align="center">
  <a href="https://github.com/alaemaghchich/ft_printf-1337-42" target="_blank">
	<img width="150" height="150" alt="image" src="https://github.com/user-attachments/assets/c5581538-e0a6-4fbd-8813-e55a9291f37b" />
  </a>
</p>
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

The function writes the result to the standard output and returns the number of printed characters. It returns `-1` if the format string is `NULL`, ends with a standalone `%`, or an output operation fails.

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

`ft_printf` reads the format string from left to right:

1. Ordinary characters are printed directly with `ft_putchar`.
2. When `%` is followed by a supported conversion character, `do_it` selects the matching conversion function.
3. `va_arg` retrieves the next argument as the required C type.
4. The conversion function returns the number of characters it wrote, or `-1` if allocation or output fails.

5. Every successful character count is added to the total.
6. The function closes the variable argument list and returns the final character count.

If the format string is `NULL`, `ft_printf` returns `-1`. A trailing `%` is also invalid and returns `-1`.

Variable arguments are managed with `va_list`, `va_start`, `va_arg`, and `va_end`. `va_list` keeps track of the next argument while `va_start` initializes it and `va_end` closes it.

### Decimal numbers

`ft_nblen` calculates the number of characters needed for a signed or unsigned decimal value. `ft_putnbr` converts an `int` by:

1. Handling `0` directly.
2. Copying the value into a `long` to support `INT_MIN` safely.
3. Allocating a buffer of the required size.
4. Storing `'-'` before the digits for negative values.
5. Extracting digits from right to left with division and remainder by 10.
6. Writing the completed buffer with `ft_putstr`.

The buffer is allocated dynamically and is freed after a successful string write. `ft_put_u_nbr` follows the same digit-buffer algorithm for `unsigned int` values, without a sign character.

### Hexadecimal and pointer numbers

Hexadecimal output uses repeated division by 16. `ft_puthex` stores the remainder characters in a fixed 8-character buffer, using lowercase or uppercase digits, then reads the buffer backward. This buffer is large enough for one `unsigned int` value.

`ft_putptr` converts the address to `unsigned long`, prints the `0x` prefix, and stores up to 16 hexadecimal digits in a fixed-size buffer. The digits are then printed in reverse storage order. A `NULL` pointer is printed as `(nil)`.

The main data structure is `va_list`. No complex collection is needed because the format string is processed one character at a time. The number conversions use either dynamically sized decimal buffers or fixed-size hexadecimal buffers.

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

AI was used to help organize this and to understanding some new concept in thee project README so that the project goal, build instructions, supported conversions, algorithm, and resources are easy to understand. AI was not used to implement the conversion functions or change the source code.
