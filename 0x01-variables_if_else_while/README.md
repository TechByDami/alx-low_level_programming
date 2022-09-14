## 0x01. C - Variables, if, else, while

![020819_0436_CConditiona2](https://user-images.githubusercontent.com/110563322/190170307-8168ebfe-98e9-435b-8c2a-f6d9f0dfab6a.jpeg)

### TASKS
<details>
<summary><a href="./0-positive_or_negative.c">0. Positive anything is better than negative nothing</a></summary><br>

This program will assign a random number to the variable n each time it is
executed. Complete the source code in order to print whether the number stored
in the variable n is positive or negative.

* The variable n will store a different value every time you will run this
  program
* You don’t have to understand what rand, srand, RAND_MAX do. Please do not
  touch this code
* The output of the program should be:
* The number, followed by
      if the number is greater than 0: is positive
      if the number is 0: is zero
      if the number is less than 0: is negative
      followed by a new line
</details>

<details>
<summary><a href="./1-last_digit.c">1. The last digit</a></summary><br>

This program will assign a random number to the variable n each time it is
executed. Complete the source code in order to print the last digit of the
number stored in the variable n.

* The variable n will store a different value every time you run this program
* You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
* The output of the program should be:
* The string Last digit of, followed by n,
      followed by
      the string is, followed by
      if n is greater than 5: the string and is greater than 5
      if n is 0: the string and is 0
      if n is less than 6 and not 0: the string and is less than 6 and not 0
      followed by a new line
</details>

<details>
<summary><a href="./2-print_alphabet.c">2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game</a></summary><br>

Write a program that prints the alphabet in lowercase, followed by a new line.

* You can only use the putchar function (every other function
  printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar twice in your code
</details>

<details>
<summary><a href="./3-print_alphabets.c">3. alphABET</a></summary><br>

Write a program that prints the alphabet in lowercase, and then in uppercase,
followed by a new line.

* You can only use the putchar function (every other function
  (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar three times in your code
</details>

<details>
<summary><a href="./4-print_alphabt.c">4. When I was having that alphabet soup, I never thought that it would pay off</a></summary><br>

Write a program that prints the alphabet in lowercase, followed by a new line.

* Print all the letters except q and e
* You can only use the putchar function (every other function
  (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar twice in your code
</details>

<details>
<summary><a href="./5-print_numbers.c">5. Numbers</a></summary><br>

Write a program that prints all single digit numbers of base 10 starting from 0,
followed by a new line.

* All your code should be in the main function
</details>

<details>
<summary><a href="./6-print_numberz.c">6. Numberz</a></summary><br>

Write a program that prints all single digit numbers of base 10 starting from 0,
followed by a new line.

* You are not allowed to use any variable of type char
* You can only use the putchar function (every other function
  (printf, puts, etc…) is forbidden)
* You can only use putchar twice in your code
* All your code should be in the main function
</details>

<details>
<summary><a href="./7-print_tebahpla.c">7. Smile in the mirror</a></summary><br>

Write a program that prints the lowercase alphabet in reverse, followed by a new
line.

* You can only use the putchar function (every other function
  (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar twice in your code
</details>

<details>
<summary><a href="./8-print_base16.c">8. Hexadecimal</a></summary><br>

Write a program that prints all the numbers of base 16 in lowercase,
followed by a new line.

* You can only use the putchar function (every other function
  (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar three times in your code
</details>

<details>
<summary><a href="./9-print_comb.c">9. Patience, persistence and perspiration make an unbeatable combination for success</a></summary><br>

Write a program that prints all possible combinations of single-digit numbers.

* Numbers must be separated by ,, followed by a space
* Numbers should be printed in ascending order
* You can only use the putchar function (every other function
  (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar four times maximum in your code
* You are not allowed to use any variable of type char
</details>

<details>
<summary><a href="./100-print_comb3.c">10. Inventing is a combination of brains and materials. The more brains you use, the less material you need</a></summary><br>

Write a program that prints all possible different combinations of two digits.

* Numbers must be separated by ,, followed by a space
* The two digits must be different
* 01 and 10 are considered the same combination of the two digits 0 and 1
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order, with two digits
* You can only use the putchar function (every other function
  (printf, puts, etc…) is forbidden)
* You can only use putchar five times maximum in your code
* You are not allowed to use any variable of type char
* All your code should be in the main function
</details>

<details>
<summary><a href="./101-print_comb4.c">11. The success combination in business is: Do what you do better... and: do more of what you do...</a></summary><br>

Write a program that prints all possible different combinations of three digits.

* Numbers must be separated by ,, followed by a space
* The three digits must be different
* 012, 120, 102, 021, 201, 210 are considered the same combination of the three
  digits 0, 1 and 2
* Print only the smallest combination of three digits
* Numbers should be printed in ascending order, with three digits
* You can only use the putchar function (every other function
  (printf, puts, etc…) is forbidden)
* You can only use putchar six times maximum in your code
* You are not allowed to use any variable of type char
* All your code should be in the main function)
</details>

<details>
<summary><a href="./102-print_comb5.c">12. Software is eating the World</a></summary><br>

Write a program that prints all possible combinations of two two-digit numbers.

* The numbers should range from 0 to 99
* The two numbers should be separated by a space
* All numbers should be printed with two digits. 1 should be printed as 01
* The combination of numbers must be separated by coma, followed by a space
* The combinations of numbers should be printed in ascending order
* 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
* You can only use the putchar function (every other function
  (printf, puts, etc…) is forbidden)
* You can only use putchar eight times maximum in your code
* You are not allowed to use any variable of type char
* All your code should be in the main function
</details>








<h3 align="left">Connect with me:</h3>
<p align="left">
<a href="https://twitter.com/techbydami" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="techbydami" height="30" width="40" /></a>
<a href="https://linkedin.com/in/agboola-olawale-damilola-7b2132246" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="agboola-olawale-damilola-7b2132246" height="30" width="40" /></a>
<a href="https://stackoverflow.com/users/19747131" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/stack-overflow.svg" alt="19747131" height="30" width="40" /></a>
<a href="https://instagram.com/techbydami" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/instagram.svg" alt="techbydami" height="30" width="40" /></a>
<a href="https://hashnode.com/@techbydami" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/hashnode.svg" alt="@techbydami" height="30" width="40" /></a>
<a href="https://www.youtube.com/c/techbydami" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/youtube.svg" alt="techbydami" height="30" width="40" /></a>
<a href="https://discord.gg/5007" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/discord.svg" alt="5007" height="30" width="40" /></a>
</p>
