
![Logo](https://cravero-consulting.com/wp-content/uploads/2023/11/68747470733a2f2f7777772e6765656b73756c74642e636f6d2f77702d636f6e74656e742f75706c6f6164732f323032302f30332f7072696e74662e6a7067.jpeg)
**Project Title:** _printf clone

**Description:**
This project is a custom implementation of the C library function printf. Our version, named _printf, replicates the basic functionalities of the standard printf function, allowing formatted output to stdout. It's designed to demonstrate a deep understanding of variadic functions in C, string manipulation, and output handling.

**Compilation Command**
To compile the _printf function and any associated files, use:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output

**Requirements**
Environment: Ubuntu 20.04 LTS
Compiler: GCC
Version Control: Git
Please note that while these requirements capture the primary environment and tools used, they do not include all specific requirements of the project.

**Usage Examples**
The _printf clone function can be used in a similar way to the standard printf function. Here are some examples:

**Example 1: Printing a String**
Code:_printf("Hello, World!\n");

**Output on STDOUT:**
Hello, World!

**Example 2: Printing an Integer**
Code: _printf("Number: %d\n", 10);

**Output on STDOUT:**
Number: 10

**Man Page**
Refer to the provided manual page for detailed usage instructions.

**Testing**
Tests for the _printf clone function should cover a variety of use cases. Use the following command for testing with memory leak checks:
valgrind ./output

**Flowchart**
The flowchart detailing the logic of _printf clone is included in the project files. It outlines the handling of different format specifiers and the overall structure of the function.


## Screenshots

![App Screenshot](https://cravero-consulting.com/wp-content/uploads/2023/11/flowchart_printf.jpg)


## Authors

- [@Mikaël PERRET](https://github.com/mkl-74)
- [@Thierry CRAVERO](https://github.com/SpeedCash)
