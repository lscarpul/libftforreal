# libftforreal

A complete implementation of the libft library - a collection of standard C library functions reimplemented for educational purposes.

## Description

This library contains implementations of various standard C library functions, including:
- Character checking and manipulation functions
- String manipulation and analysis functions
- Memory manipulation functions
- Conversion functions
- Additional utility functions for string processing
- Output functions

## Compilation

To compile the library, run:
```bash
make
```

This will create `libft.a`, a static library that can be linked with your projects.

## Usage

Include the header in your C files:
```c
#include "libft.h"
```

Compile your program with the library:
```bash
cc your_program.c -L. -lft -o your_program
```

## Functions

### Character Checking
- `ft_isalpha` - Check if character is alphabetic
- `ft_isdigit` - Check if character is a digit
- `ft_isalnum` - Check if character is alphanumeric
- `ft_isascii` - Check if character is ASCII
- `ft_isprint` - Check if character is printable

### String Manipulation
- `ft_strlen` - Calculate string length
- `ft_strlcpy` - Copy string with size limit
- `ft_strlcat` - Concatenate strings with size limit
- `ft_strchr` - Locate character in string
- `ft_strrchr` - Locate character in string (from end)
- `ft_strncmp` - Compare strings up to n characters
- `ft_strnstr` - Locate substring in string
- `ft_strdup` - Duplicate string

### Memory Manipulation
- `ft_memset` - Fill memory with constant byte
- `ft_bzero` - Zero out memory
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (handles overlap)
- `ft_memchr` - Scan memory for character
- `ft_memcmp` - Compare memory areas

### Conversion
- `ft_atoi` - Convert string to integer
- `ft_itoa` - Convert integer to string
- `ft_toupper` - Convert character to uppercase
- `ft_tolower` - Convert character to lowercase

### Memory Allocation
- `ft_calloc` - Allocate and zero memory

### Additional String Functions
- `ft_substr` - Extract substring
- `ft_strjoin` - Concatenate two strings
- `ft_strtrim` - Trim characters from string
- `ft_split` - Split string by delimiter
- `ft_strmapi` - Apply function to string with index
- `ft_striteri` - Iterate string with function

### Output Functions
- `ft_putchar_fd` - Output character to file descriptor
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl_fd` - Output string with newline to file descriptor
- `ft_putnbr_fd` - Output number to file descriptor

## Cleaning

To remove object files:
```bash
make clean
```

To remove object files and the library:
```bash
make fclean
```

To recompile everything:
```bash
make re
```
