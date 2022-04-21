_printf

Create the printf function This is a colaborative project of Abdulsalam Okunlola and Oluwatoyin Olubayo The _printf function accepts an argument and prints to the standard output

printf description

The printf function sends formatted output to stdout. A custom _printf() for learning purposes was developed by cohort #5 Abdulsalam Okunlola and Oluwatoyin Olubayo. _printf() function format string is a character string, beginning and ending in its initial shift state, if any. These arguments are placed using the percentage '%' operator

Dependencies

The _printf function was coded on an Ubuntu 20.04 LTS machine with gcc version 11.2.0.

Authorized functions and macros

write (man 2 write) malloc (man 3 malloc) free (man 3 free) va_start (man 3 va_start) va_end (man 3 va_end) va_copy (man 3 va_copy) va_arg (man 3 va_arg)

Compilation

The code must be compiled this way:

*$ gcc -Wall -Werror -Wextra -pedantic .c

As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

The main files will include your main header file (main.h): #include main.h

Use & Examples

Prototype: int _printf(const char *format, ...); Use - General: _printf("format string", var1, var2, ...);

Examples:

Basic String: _printf("%s Holberton", "Hello");`

Output: Hello Holberton

Print integers: _printf("This is an array element: arr[%d]:%c", 32, arr[32]);`

Output: This is an array element arr[32]:A

Many other specifiers and flags were added and by combinig those the _printf() function generate a different ouput. The following list are the specifiers and flags allowed.

Tasks required for this project

0) I am not going anywhere. You can print that wherever you want to. I'm here and I am a Spur for life1. I am not going anywhere. You can print that wherever you want to. I'm here and I am a Spur for life.
Write a function that produces output according to a format. Handle the following conversion specifiers:

c

s

%

1) Education is when you read the fine print. Experience is what you get if you dont
Handle the following conversion specifiers:

d

i

2) Just because its in print doesn't mean its the gospel

Create a man page for the function

3) With a face like mine, I do better in print

Handle the following conversion specifiers:

b: the unsigned int argument is converted to binary

4) What one has not experienced, one will never understand in print

Handle the following conversion specifiers:

u

x

o

x

X

5) Nothing in fine print is ever good news

Use a local buffer of 1024 chars in order to call write as little as possible.

6) Handle the following custom conversion specifier

S : prints the string.

Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).

7) How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print

Handle the following conversion specifier: p

8) The big print gives and the small print takes away

Handle the following flag characters for non-custom conversion specifiers:

´+´

space

´#´

10) Sarcasm is lost in print

Handle the following length modifiers for non-custom conversion specifiers:

l

h Conversion specifiers to handle: d, i, u, o, x, X

11) Print some money and give it to us for the rain forests

Handle the field width for non-custom conversion specifiers.

12) The negative is the equivalent of the composer's score, and the print the performance

Handle the precision for non-custom conversion specifiers.

13)It's depressing when you're still around and your albums are out of print

Handle the 0 flag character for non-custom conversion specifiers.

14) Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection

Handle the - flag character for non-custom conversion specifiers.

15) Print is the sharpest and the strongest weapon of our party

Handle the following custom conversion specifier:

r : prints the reversed string

The flood of print has turned reading into a process of gulping rather than savoring

Handle the following custom conversion specifier:

R: prints the rot13'ed string

*

16) All the above options work well together.

Authors ©

Abdulsalam Okunlola  < Abdulsalam121

Oluwatoyin Olubayo < Tolexy95


















