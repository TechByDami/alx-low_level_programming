
## [Debugging](https://alx-intranet.hbtn.io/projects/539)

![debug](https://user-images.githubusercontent.com/110563322/190275418-5ac16d4f-c218-460b-a706-fe5dea6a411d.jpeg)

In computer programming and software development, **debugging** is the process of finding and resolving bugs (defects or problems that prevent correct operation) within computer programs, software, or systems. 
Debugging tactics can involve interactive debugging, control flow analysis, unit testing, integration testing, log file analysis, monitoring at the application or system level, memory dumps, and profiling. 

Many programming languages and software development tools also offer programs to aid in debugging, known as debuggers. 

## Tools 

**Debugging** ranges in complexity from fixing simple errors to performing lengthy and tiresome tasks of data collection, analysis, and scheduling updates. The debugging skill of the programmer can be a major factor in the ability to debug a problem, but the difficulty of software debugging varies greatly with the complexity of the system, and also depends, to some extent, on the programming language(s) used and the available tools, such as debuggers. Debuggers are software tools which enable the programmer to monitor the execution of a program, stop it, restart it, set breakpoints, and change values in memory. The term debugger can also refer to the person who is doing the debugging. 

Generally, high-level programming languages, such as Java, make debugging easier, because they have features such as exception handling and type checking that make real sources of erratic behaviour easier to spot. In programming languages such as C or assembly, bugs may cause silent problems such as memory corruption, and it is often difficult to see where the initial problem happened. In those cases, memory debugger tools may be needed. 
In certain situations, general purpose software tools that are language specific in nature can be very useful. These take the form of static code analysis tools. These tools look for a very specific set of known problems, some common and some rare, within the source code, concentrating more on the semantics (e.g. data flow) rather than the syntax, as compilers and interpreters do. 

Both commercial and free tools exist for various languages; some claim to be able to detect hundreds of different problems. These tools can be extremely useful when checking very large source trees, where it is impractical to do code walk-throughs. A typical example of a problem detected would be a variable dereference that occurs before the variable is assigned a value. As another example, some such tools perform strong type checking when the language does not require it. Thus, they are better at locating likely errors in code that is syntactically correct. But these tools have a reputation of false positives, where correct code is flagged as dubious. The old Unix lint program is an early example. 
![debugging_cycle](https://user-images.githubusercontent.com/110563322/190276860-3bceaf42-81aa-42aa-85d6-4db39de57877.png)

## Debugging Process 

Normally the first step in debugging is to attempt to reproduce the problem. 
This can be a non-trivial task, for example as with parallel processes and some Heisenbugs. Also, specific user environment and usage history can make it difficult to reproduce the problem. 

After the bug is reproduced, the input of the program may need to be simplified to make it easier to debug. For example, a bug in a compiler can make it crash when parsing some large source file. However, after simplification of the test case, only few lines from the original source file can be sufficient to reproduce the same crash. Such simplification can be made manually, using a divide-and-conquer approach. The programmer will try to remove some parts of original test case and check if the problem still exists. 

When debugging the problem in a GUI, the programmer can try to skip some user interaction from the original problem description and check if remaining actions are sufficient for bugs to appear. 

After the test case is sufficiently simplified, a programmer can use a debugger tool to examine program states (values of variables, plus the call stack) and track down the origin of the problem(s). Alternatively, tracing can be used. In simple cases, tracing is just a few print statements, which output the values of variables at certain points of program execution.

-- -

### Reference
Visit <a href="https://alx-intranet.hbtn.io/rltoken/faGcpiJiejHH6GhqpmbhUw">0. Debugging
</a>

-- -

### TASKS

<details>
<summary><a href="./0-main.c">0. Multiple mains 
</a></summary><br>

In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in [an earlier C project](https://alx-intranet.hbtn.io/rltoken/lKcOFkG-GCivSDXgWgld2g):
Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.


* You are not allowed to add or remove lines of code, you may change only one line in this task.

</details>


<details>
<summary><a href="./1-main.c">1. Like, comment, subscribe 
</a></summary><br>

Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.


* Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
* You do not have to compile with -Wall -Werror -Wextra -pedantic for this task. 


</details>

<details>
<summary><a href="./1-main.c">2. 0 > 972?
</a></summary><br>

This program prints the largest of three integers..
Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.

* Line count will not be checked for this task. 


</details>


</details>

<details>
<summary><a href="./3-print_remaining_days.c">3. Leap year
</a></summary><br>

This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.

* Line count will not be checked for this task.
* You can assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).
* You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427). 


</details>

-- -

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
