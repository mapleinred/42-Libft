# Libft

My First Custom C Library – Built from Scratch during the 42 School Core Curriculum.

## Description

Libft is the very first project in the 42 programming school curriculum. Its objective is to create a personal C library by reimplementing standard C library functions and adding some custom utility functions. This project deepens understanding of low-level memory handling, pointers, and core C programming concepts.

This library is modular, reusable, and will serve as a foundational tool for all upcoming C projects at 42.

## Features

Libft includes:

### Standard C Library Reimplementations

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- Conversions: `ft_atoi`, `ft_toupper`, `ft_tolower`
- Memory allocation: `ft_calloc`, `ft_strdup`

### Additional Utility Functions

- String manipulation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- Integer to string: `ft_itoa`
- Function application: `ft_strmapi`, `ft_striteri`
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

###  Bonus Part – Linked List Functions

Implemented singly linked list utilities using a custom `t_list` struct:

- Node creation and insertion: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- List traversal and size: `ft_lstsize`, `ft_lstlast`
- Deletion and iteration: `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Project Structure

libft/
    ft_*.c # Source files for all implemented functions
    libft.h # Header file declaring all functions and types
    libft.a # Static library generated after compilation
    Makefile # Automates building, cleaning, etc.

## Project Rules

- Written in C and adheres to 42 Norm coding standards
- No memory leaks (checked with valgrind)
- All files compile with: `-Wall -Wextra -Werror`
- Includes a Makefile supporting: `all`, `clean`, `fclean`, `re`, and `bonus`

## How to Use

### 1. Clone the repository

```bash
git clone git@github.com:mapleinred/42-Libft.git
cd libft

## 2. Build the Library

Run the following command to compile all source files and create `libft.a`:

```bash
make

3. How to Use in Your Own Project
    To use libft in your C project:
    
    a. Make sure libft.a and libft.h are in your project directory or adjust include/library paths accordingly.

    b. Include the header in your code:
        #include "libft.h"
    
    c. Compile your program with libft.a linked:
        gcc main.c -L. -lft
        Explanation:
            i. -L. tells the compiler to look in the current directory for libraries
            
            ii. -lft tells it to link with libft.a (the "lib" prefix and ".a" extension are implied)

### Makefile Targets
    1. make: builds libft.a
    2. make clean: removes object files
    3. make fclean: removes object files and libft.a
    4. make re: rebuilds everything
    5. make bonus: builds additional bonus list functions






# 42-Libft
This project is your very first project as a student at 42. You will need to recode a few functions of the C standard library as well as some other utility functions that you will use during your whole cursus.
