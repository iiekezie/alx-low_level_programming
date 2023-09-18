## 0x05. C - Pointers, Arrays and Strings

Project done during **Full Stack Software Engineering studies** at **ALX School**. It aims to learn about nested loops in **C language**.

## Resources
* C - Arrays
* C - Pointers
* C - Strings
* Memory Layout


## Technologies
* C files are compiled using `gcc 4.8.4`
* C files are written according to the C90 standard
* Tested on Ubuntu 14.04 LTS
* You are allowed to use _putchar
* Your code should use the Betty style
* gcc

## Tasks
All of the following files are programs written in C:


| 'Filename' | 'Description' |  'Prototype' |
| -------- | ----------- |----------- |
| `0. 98 Battery st.` | Write a function that takes a pointer to an int as parameter and updates the value it points to to 98. | void reset_to_98(int *n);|
| `1. Don't swap horses in crossing a stream` | Write a function that swaps the values of two integers. |void swap_int(int *a, int *b);|
| `2. This report, by its very length, defends itself against the risk of being read` | Write a function that returns the length of a string. |int _strlen(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.|
| `3. I do not fear computers. I fear the lack of them` | Write a function that prints a string, followed by a new line, to stdout. |void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.|
| `4. I can only go one way. I've not got a reverse gear` | 
Write a function that prints a string, in reverse, followed by a new line. |void print_rev(char *s);|
| `5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes` | Write a function that reverses a string. |void rev_string(char *s);|
| `6. Half the lies they tell about me aren't true` | Write a function that prints every other character of a string, starting with the first character, followed by a new line. |void puts2(char *str);|
| `7. Winning is only half of it. Having fun is the other half` | Write a function that prints half of a string, followed by a new line. |void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2|
| `8. Arrays are not pointers` | Write a function that prints n elements of an array of integers, followed by a new line. |void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf |
| `9. strcpy` | Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest. |char *_strcpy(char *dest, char *src  Return value: the pointer to dest FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.|
| `10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the number` | Write a function that convert a string to an integer. |int _atoi(char *s); The number in the string can be preceded by an infinite number of characters *You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
* You are not allowed to use long
* You are not allowed to declare new variables of “type” array
* You are not allowed to hard-code special values 
* We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.|
| `11. Don't hate the hacker, hate the code` | Create a program that generates random valid passwords for the program 101-crackme. |
| `You are allowed to use the standard library You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests) man srand, rand, time gdb and objdump can help |
