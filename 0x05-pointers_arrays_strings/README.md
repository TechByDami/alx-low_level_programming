# 0x05. C - Pointers, arrays and strings.

<p>
  <img src="https://i.postimg.cc/dtJkkJV9/pointers.jpg" width="80%">
</p>

### Description

1. What are pointers and how to use them
2. What are arrays and how to use them
3. What are the differences between pointers and arrays
4. How to use strings and how to manipulate them
5. Scope of variables



## Tasks
- We will be using function prototypes that will be included in our header file called, [main.h](./main.h).

<details>
<summary><a href="./0-reset_to_98.c">0. 98 Battery st.</a></summary><br>

Write a function that takes a pointer to an int as parameter and updates the
value it points to to 98.

* Prototype: void reset_to_98(int *n);

</details>

<details>
<summary><a href="./1-swap.c">1. Don't swap horses in crossing a stream</a></summary><br>

Write a function that swaps the values of two integers.

* Prototype: void swap_int(int *a, int *b);

</details>

<details>
<summary><a href="./2-strlen.c">2. This report, by its very length, defends itself against the rist of being read</a></summary><br>

Write a function that returns the length of a string.

* Prototype: int _strlen(char *s);

</details>

<details>
<summary><a href="./3-puts.c">3. I do not fear computers. I fear the lack of them</a></summary><br>

Write a function that prints a string, followed by a new line, to stdout.

* Prototype: void _puts(char *str);

</details>

<details>
<summary><a href="./4-print_rev.c">4. I do not fear computers. I fear the lack of them</a></summary><br>

I can only go one way. I've not got a reverse gear
Write a function that prints a string, in reverse, followed by a new line.

* Prototype: void print_rev(char *s);

</details>

<details>
<summary><a href="./5-rev_string.c">5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes</a></summary><br>

Write a function that reverses a string. 
* Prototype: void rev_string(char *s);
</details>

<details>
<summary><a href="./6-puts2.c">6. Half the lies they tell about me aren't true</a></summary><br>

Write a function that prints one char out of 2 of a string, followed by a new
line.

* Prototype: void puts2(char *str);
* The function should print only one character out of two, starting with the
  first one

</details>

<details>
<summary><a href="./7-puts_half.c">7. Winning is only half of it. Having fun is the other half</a></summary><br>

Write a function that prints half of a string, followed by a new line.

* Prototype: void puts_half(char *str);
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

</details>

<details>
<summary><a href="./8-print_array.c">8. Arrays are not pointers</a></summary><br>

Write a function that prints n elements of an array of integers,
followed by a new line.

* Prototype: void print_array(int *a, int n);
* where n is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they
  are stored in the array
* You are allowed to use printf

</details>

<details>
<summary><a href="./9-strcpy.c">9. strcpy</a></summary><br>

Write a function that copies the string pointed to by src, including the
terminating null byte (\0), to the buffer pointed to by dest.

* Prototype: char *_strcpy(char *dest, char *src);
* Return value: the pointer to dest

</details>

<details>
<summary><a href="./100-atoi.c">10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers</a></summary><br>

Write a function that convert a string to an integer.

* Prototype: int _atoi(char *s);
* The number in the string can be preceded by an infinite number of characters
* You need to take into account all the - and + signs before the number
* If there are no numbers in the string, the function must return 0
* You are not allowed to use long
* You are not allowed to declare new variables of “type” array
* You are not allowed to hard-code special values
* Your code needs to work on both ubuntu 14.04 LTS and 16.04 LTS
* We will use the -fsanitize=signed-integer-overflow gcc flag to compile your
  code.
* If this flag is not available in you version of gcc, you can install the last
  version on your VM
* We will use gcc version 5 or above to compile

</details>


<details>
<summary><a href="./101-keygen.c">11. Don't hate the hacker, hate the code</a></summary><br>

Create a program that generates random valid passwords for the
program 101-crackme.

* You are allowed to use the standard library
* You don’t have to pass the betty-style tests
* (you still need to pass the betty-doc tests)
* man srand, rand, time
* gdb and objdump can help
</details>

-- -

<h4 align="left">Connect with me:</h4>
<p align="left">
<a href="https://twitter.com/techbydami" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="techbydami" height="30" width="40" /></a>
<a href="https://linkedin.com/in/agboola-olawale-damilola-7b2132246" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="agboola-olawale-damilola-7b2132246" height="30" width="40" /></a>
<a href="https://stackoverflow.com/users/19747131" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/stack-overflow.svg" alt="19747131" height="30" width="40" /></a>
<a href="https://instagram.com/techbydami" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/instagram.svg" alt="techbydami" height="30" width="40" /></a>
<a href="https://hashnode.com/@techbydami" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/hashnode.svg" alt="@techbydami" height="30" width="40" /></a>
<a href="https://www.youtube.com/c/techbydami" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/youtube.svg" alt="techbydami" height="30" width="40" /></a>
<a href="https://discord.gg/5007" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/discord.svg" alt="5007" height="30" width="40" /></a>
</p>
