![Logo](https://uploads-ssl.webflow.com/6105315644a26f77912a1ada/63eea844ae4e3022154e2878_Holberton.png)

# **C – printf**
<div style="text-align:center"><img src="https://github.com/Abbassimedayoub/holbertonschool-printf/assets/134635340/17a2e6bf-f951-4717-8d46-807435101828" /></div>

## **Description**
This repository hosts an updated implementation of the _printf() function within the standard library (stdio.h).I
Its primary objective is to output text along with an unlimited number of variables in accordance with specific formatting rules.
## **Prototype**
```int _printf(const char *format, ...)```
This function is designed to print a string to the standard output based on a provided format.
Upon success, it returns the count of characters in the generated output string; otherwise, it returns -1.
To utilize this function, use the following syntax: _printf("format string", arguments...).
## **Formats**
| Specifiers  	| Description |
| ----------- | -----------|
|%c |	Print single character  |
|%s |	Print string  |
|%  |	Print percent (%)|
|%d |	Print decimal numbers |
|%i |	Print number |

## **Requirements**
-	All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-	All your files should end with a new line
-	Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-	You are not allowed to use global variables
-	No more than 5 functions per file
-	The prototypes of all your functions should be included in your header file called main.h
-	All your header files should be include guarded
## **Authorized functions and macros**
  - `write` (`man 2 write`)
  - `malloc` (`man 3 malloc`)
  - `free` (`man 3 free`)
  - `va_start` (`man 3 va_start`)
  - `va_end` (`man 3 va_end`)
  - `va_copy` (`man 3 va_copy`)
  - `va_arg` (`man 3 va_arg`)
## **Compilation**
•	Your code will be compiled this way:

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

```
## Authors
- [abbassi mohamed ayoub](https://www.github.com/abbassimedayoub)
- [Fanuel Pierre](https://www.github.com/Fpierr)
