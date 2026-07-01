_This project has been created as part of the 42 curriculum by masilva-c._

# ft_printf
The project where I learned about variadic function, fell in love with recursion and was blessed by static variables.

## Description
```c
int		ft_printf(const char *, ...);
```
Write a library that contains **`ft_printf()`**, a function that will mimic the original `printf()`, from libc, included in `<stdio.h>` _(man 3 man printf)_ .

### Arguments
* **const char \***: a string, as the fixed argument
* *...* : a variable number of arguments.

### Return Value
* **int**: returns the number of bytes printed (excluding the null byte used to end output to strings)

### External Functions Allowed
* `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`

### Technical Requirements
* Do not implement the buffer management of the original printf().
* Your function has to handle the following conversions: cspdiuxX%
* Your function will be compared against the original printf().
* You must use the command ar to create your library.
Using the libtool command is forbidden.
* Your libftprintf.a has to be created at the root of your repository.
* Your header file must be named ft_printf.h and must contain the prototype of
your ft_printf() function.

---

## Instructions
The function `ft_printf` takes the following conversions:
* %c Prints a single character.
* %s Prints a string (as defined by the common C convention).
* %p The void * pointer argument has to be printed in hexadecimal format.
* %d Prints a decimal (base 10) number.
* %i Prints an integer in base 10.
* %u Prints an unsigned decimal (base 10) number.
* %x Prints a number in hexadecimal (base 16) lowercase format.
* %X Prints a number in hexadecimal (base 16) uppercase format.
* %% Prints a percent sign.

### Usage
#### Integration on your Source Code

To use `ft_printf` in your code, make sure to include the path to the header in your source files that call the function or on your own header:

```c
#include "path/to/ft_printf.h"
```

#### Compilation

Simply compile your code with the libftprintf.a archive.
Considering it is at the root of your directory, you may use this cmdline:

```bash
cc -Wall -Wextra -Werror libftprintf.a your_files.c
```

#### Function Calling Usage
```c
#include "ft_printf.h"

int main(void)
{
    char    c = 'C';
    char    *s = "Moulinette";
    int     d = 42;
    int     i = INT_MIN; // -2147483648
    unsigned int u = UINT_MAX; // 4294967295U
    int     x = 3735928559U; // 0xdeadbeef

    ft_printf("Norm Error %c: %s stole %p to turn %d & %i into %u%% pure %x or %X!\n", 
           c, s, (void *)&s, d, i, u, x, x);
    return (0);
}
```

## Algorithm and Data Structures
`ft_printf` is a variadic function. This means it receives a certain first argument (with a specified )


## Resources
### Online documentation
https://medium.com/@sreehema2025/understanding-buffers-in-c-why-your-printf-might-not-show-up-immediately-98c4d9d60d75

### AI Usage
I used AI to help me format this `Readme.md` .
In regards to code development, no AI was used.