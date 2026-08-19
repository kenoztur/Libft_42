*This project has been created as part of the 42 curriculum by kenoztur.*

# Libft - 42 School Project

## 📌 Description
`libft` is the foundational project at 42 School. The objective is to recode a set of standard C library functions, alongside various custom utility functions and linked list manipulations, creating our own static library (`libft.a`) to be reused in future 42 C projects.

---
## Instructions

Compile the library from the project root:

```sh
make
```

This creates `libft.a`. Include `libft.h` in a program and link the library:

```sh
cc main.c libft.a
```

Available Makefile rules are `all`, `clean`, `fclean`, and `re`.

## 🛠️ Functions Included

### 1. Character Checks & Conversions
* `ft_isalpha` - Checks for an alphabetic character.
* `ft_isdigit` - Checks for a digit (0 through 9).
* `ft_isalnum` - Checks for an alphanumeric character.
* `ft_isascii` - Checks whether c fits into the ASCII character set.
* `ft_isprint` - Checks for any printable character.
* `ft_toupper` - Converts a letter to uppercase.
* `ft_tolower` - Converts a letter to lowercase.
* `ft_atoi`    - Converts a string to an integer.

### 2. Memory Operations
* `ft_memset`  - Fills memory with a constant byte.
* `ft_bzero`   - Zeroes a byte string.
* `ft_memcpy`  - Copies memory area.
* `ft_memmove` - Copies memory area (safely handles overlapping areas).
* `ft_memchr`  - Scans memory for a character.
* `ft_memcmp`  - Compares memory areas.
* `ft_calloc`  - Allocates memory and sets bytes to zero.

### 3. String Operations
* `ft_strlen`    - Calculates the length of a string.
* `ft_strchr`    - Locates a character in a string.
* `ft_strrchr`   - Locates a character in a string from the end.
* `ft_strncmp`   - Compares two strings up to n bytes.
* `ft_strlcpy`   - Size-bounded string copying.
* `ft_strlcat`   - Size-bounded string concatenation.
* `ft_strncpy`   - Copies up to n characters from a string.
* `ft_strnstr`   - Locates a substring in a string.
* `ft_strdup`    - Creates a duplicate of a string.

### 4. Additional & Manipulation Functions
* `ft_substr`    - Extracts a substring from a string.
* `ft_strjoin`   - Concatenates two strings.
* `ft_strtrim`   - Trims specified characters from the beginning and end of a string.
* `ft_split`     - Splits a string using a delimiter character.
* `ft_itoa`      - Converts an integer to a string.
* `ft_strmapi`   - Applies a function to each character of a string (with index).
* `ft_striteri`  - Applies a function to each character of a string in-place (with index).

### 5. File Descriptor Output Functions
* `ft_putchar_fd` - Outputs a character to a file descriptor.
* `ft_putstr_fd`  - Outputs a string to a file descriptor.
* `ft_putendl_fd` - Outputs a string followed by a newline to a file descriptor.
* `ft_putnbr_fd`  - Outputs an integer to a file descriptor.

### 6. Linked List Functions
* `ft_lstnew`     - Creates a new list element.
* `ft_lstadd_front` - Adds an element at the beginning of a list.
* `ft_lstsize`    - Counts the number of elements in a list.
* `ft_lstlast`    - Returns the last element of the list.
* `ft_lstadd_back` - Adds an element at the end of a list.
* `ft_lstdelone`  - Deletes and frees an element.
* `ft_lstclear`   - Deletes and frees all elements of a list.
* `ft_lstiter`    - Iterates over a list and applies a function to each element's content.
* `ft_lstmap`     - Iterates over a list, applies a function, and creates a new resulting list.

---

## ⚙️ Usage

### Resources

	man 3 pages for the libc functions reimplemented by this project.

	The C standard library documentation at https://man7.org/linux/man-pages/.

	The project subject supplied by 42.

### AI usage

AI was used to help structure and write this README file. It was also used while coding, as a reference or guide for understanding complex logic and debugging errors encountered during development.