<h1 align="center">  Libft - @42sp </h1>

<p align="center">:information_source: A C static library with recoded standard functions </p>

<p align="center"><a href="https://www.42sp.org.br/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=SP&color=000&style=for-the-badge&logo=42""></a></p>
<p align="center"><img src="https://user-images.githubusercontent.com/81205527/149165832-9344c9e5-6075-4268-b276-26b60efc5733.png"> </p>
<p align="center"> <strong>125/100</strong> ✔️ </p>
<p align="center"><a href="https://github.com/augustobecker/Libft/blob/master/README-ptbr.md" target="_blank"><img src="https://img.shields.io/badge/dispon%C3%ADvel%20tamb%C3%A9m%20em-PT--BR-yellow"></a></p>
 
## Index
* [What is Libft?](#what-is-libft)
* [Requirements](#requirements)
* [Functions](#functions)
* [Makefile](#makefile)
	* [Colorful Makefile](#colorful-makefile)
* [How does it work?](#how-does-it-work)
* [How do I use the library?](#how-do-i-use-the-library)
* [How do I test it?](#how-do-i-test-it)
* [42 Cursus](#42-cursus)
* [Author](#author)

<h2 align="center" id="what-is-libft"> What is Libft? </h2>

 The first project at 42 programming school. It consists of a static library with recoded standard functions in C that runs and compiles the code using a Makefile.
 The library can be used as a support in future school's projects, since it's not allowed to use the original functions.
Once you finish the project, you can (and should) include more functions to Libft than previously asked. For example, now the projects <a href="https://github.com/augustobecker/get_next_line">get_next_line</a> and <a href="https://github.com/augustobecker/ft_printf">ft_printf</a>  are part of my library.
	
The project is divided in three parts - Part I, Part II and Bonus.

#### Part I.
>In this first part, you must re-code a set of the libc functions, as defined in their
>man. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes
>ft_strlen.
	
<p align="center">• isalpha • isdigit • isalnum • isascii • isprint • strlen • memset • bzero • memcpy • memmove • strlcpy • strlcat • toupper • tolower • strchr • strrchr • strncmp • memchr • memcmp • strnstr • atoi • calloc • strdup</p>
 
#### Part II.
>In this second part, you must code a set of functions that are either not included in the
>libc, or included in a different form. Some of these functions can be useful to write Part
>1’s functions.

<p align="center">• substr • strjoin • strtrim • split • itoa • strmapi • striteri • putchar_fd • putstr_fd • putendl_fd • putnbr_fd</p>
	
#### Bonus.
>In this Bonus part, you must code a set of functions that are useful to manipulate lists.

<p align="center">• lstnew • lstadd_front • lstsize • lstlast • lstadd_back • lstdelone • lstclear • lstiter • lstmap</p>

 <h2 align="center" id="requirements"> Requirements </h2>

<p  align="center"> :warning: The project must be written in accordance with the <a href="https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf" target="_blank">Norm</a> </p>
The Norm  is a programming standard that defines a set of rules to follow when writing code at 42. It applies to all C projects within the Common Core by default, and
to any project where it's specified. These are some of them:

    Each function must be maximum 25 lines, not counting the function's own curly brackets.
    
    Each line must be at most 80 columns wide, comments included.
    
    A function can take 4 named parameters maximum.
    
    You can't declare more than 5 variables per function.
    
    You're not allowed to use: for , do...while , switch , case ,  goto  ,
    ternary operators such as `?' and VLAs - Variable Length Arrays.
  The norminette (as we call the norm at 42) is in python and open source.
  
  Its repository is available at https://github.com/42School/norminette.
  
   In addition to the Norm, the subject have other requirements, which are:
  
    It is forbidden to declare global variables.
   
    Using the command libtool to create your library is forbidden.
    
    Your Makefile must compile with the flags -Wall, -Wextra and -Werror.

<h2 align="center" id="functions"> Functions </h2>

Those are the my Libft's functions today - some of them are not part of the subject - Once we're allowed to keep expanding our library to help us in other projects at 42.
	
### Functions from <ctype.h>
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_isalpha.c">ft_isalpha</a> - checks for an alphabetic character.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_isdigit.c">ft_isdigit</a> - checks for a digit (0 through 9).
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_isalnum.c">ft_isalnum</a> - checks for an alphanumeric character.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_isascii.c">ft_isascii</a> - checks whether c fits into the ASCII character set.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_isprint.c">ft_isprint</a> - checks for any printable character.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_toupper.c">ft_toupper</a> - convert char to uppercase.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_tolower.c">ft_tolower</a> - convert char to lowercase.
	
### Functions from <string.h>
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_memset.c">ft_memset</a> - fill memory with a constant byte.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strlen.c">ft_strlen</a> - calculate the length of a string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_bzero.c">ft_bzero</a> - zero a byte string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_memcpy.c">ft_memcpy</a> - copy memory area.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_memmove.c">ft_memmove</a> - copy memory area.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strlcpy.c">ft_strlcpy</a> - copy string to an specific size.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strlcat.c">ft_strlcat</a> - concatenate string to an specific size.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strchr.c">ft_strchr</a> - locate character in string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strrchr.c">ft_strrchr</a> - locate character in string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strncmp.c">ft_strncmp</a> - compare two strings.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_memchr.c">ft_memchr</a> - scan memory for a character.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_memcmp.c">ft_memcmp</a> - compare memory areas.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strnstr.c">ft_strnstr</a> - locate a substring in a string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strdup.c">ft_strdup</a> - creates a dupplicate for the string passed as parameter.
	
### Functions from <stdlib.h>
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_atoi.c">ft_atoi</a> - convert a string to an integer.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_calloc.c">ft_calloc</a> - allocates memory and sets its bytes' values to 0.
	
### Non-standard functions
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_substr.c">ft_substr</a> - returns a substring from a string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strjoin.c">ft_strjoin</a> - concatenates two strings.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strtrim.c">ft_strtrim</a> - trims the beginning and end of string with specific set of chars.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_split.c">ft_split</a> - splits a string using a char as parameter.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_itoa.c">ft_itoa</a> - converts a number into a string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_strmapi.c">ft_strmapi</a> - applies a function to each character of a string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_striteri.c">ft_striteri</a> - applies a function to each character of a string.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_putchar_fd.c">ft_putchar_fd</a> - output a char to a file descriptor.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_putstr_fd.c">ft_putstr_fd</a> - output a string to a file descriptor.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_putendl_fd.c">ft_putendl_fd</a> - output a string to a file descriptor, followed by a new line.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_putnbr_fd.c">ft_putnbr_fd</a> - output a number to a file descriptor.
	
### Linked list functions
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstnew.c">ft_lstnew</a> - creates a new list element.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstadd_front.c">ft_lstadd_front</a> - adds an element at the beginning of a list.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstsize.c">ft_lstsize</a> - counts the number of elements in a list.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstlast.c">ft_lstlast</a> - returns the last element of the list.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstadd_back.c">ft_lstadd_back</a> - adds an element at the end of a list.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstclear.c">ft_lstclear</a> - deletes and free list.

• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstiter.c">ft_lstiter</a> - applies a function to each element of a list.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_lstmap.c">ft_lstmap </a> - applies a function to each element of a list.
	
 ### get_next_line (2nd Project at 42)
	
• <a href="https://github.com/augustobecker/Libft/blob/master/get_next_line.c">get_next_line</a> -  reads any valid file line by line.
 
 ### Functions from "ft_printf.h" (3rd Project at 42)
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_printf.c">ft_printf</a> - output a formatted string in stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_argument_c.c">ft_argument_c</a> - output a char in stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_arguments_d_i.c">ft_arguments_d_i</a> - output an integer number in stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_argument_p.c">ft_argument_p</a> - output a memory address(a hexadecimal) in stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_argument_percent.c">ft_argument_percent</a> - output an percent sign in stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_argument_s.c">ft_argument_s</a> - output a string in stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_argument_u.c">ft_argument_u</a> - output an unsigned integer in stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_arguments_x.c">ft_arguments_x</a> - output a hexadecimal number in stdout.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_decimal_length.c">ft_decimal_length</a> - returns the length of a decimal number.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_free_ptr.c">ft_free_ptr</a> - free memory for a pointer and set its value to null.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_decimal_converter_to_hex.c">ft_decimal_converter_to_hex</a> - converts a decimal number to hexadecimal.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_hex_length.c">ft_hex_length</a> - returns the length of a hexadecimal number.
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_print_reversed_str.c">ft_print_reversed_str</a> - print an inverted string.
	
 ### Useful Functions
	
• <a href="https://github.com/augustobecker/Libft/blob/master/ft_count_occurrences.c">ft_count_occurrences</a> - returns the number of occurrences of a char in a string.

<h2 align="center" id="makefile"> Makefile </h2>

<p align="center">:information_source: A handy automation tool to Run and compile your programs more efficiently.	</p>
	
A Makefile defines set of tasks to be executed, in shell script. These tasks are writed on a target in this format:
	
	target: prerequisites
	<TAB> recipe

such as:
	
	fclean:	clean
		@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"
		${REMOVE} ${NAME}
		@echo

The recipe(the commands @echo and so forth) for the target fclean will only be executed when the target clean (the prerequisite) be executed.
a target works without prerequisites too:
	
	clean:
		@echo "\n$(NAME): $(RED)object files were deleted$(RESET)"
		${REMOVE} ${OBJS} ${BONUS_OBJS}
		@echo
	
As you could see, there are a few variables inside the recipe. The variables can be assigned just as follow:
	
	GREEN		= \033[0;32m
	RED		= \033[0;31m
	RESET		= \033[0m
	CC		= clang
	FLAGS 		= -Wall -Werror -Wextra

To use the variable value, just use the $ sign with parenthesis:
	
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

Using variables makes your Makefile more readable and easily modifiable. Try it :)

It is not necessary for the target to be a file. It could be just a name for the recipe, just as above. We call these phony targets.
	
But if you have a file with the exact name of your phony target inside of your repo, things can get a little weird.
To protected your Makefile from this, just use phony and the name of all your phony targets used:
	
	.PHONY:		all clean fclean re bonus

Here at 42 school, the subject says that
>Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
	
The rules are the target, just name some of them as $(NAME), all, clean, fclean and re.
	
The rule **$(NAME)**, in this case, should create the **$(NAME)** static library.
	
**all** is used to make the principal goal of your Makefile: create the $(NAME) static library.
	
**clean** removes the objects created to make the library.
	
**fclean** removes the objects created to make the library and the **$(NAME)**.
	
**re** just removes the objects created to make the library and the **$(NAME)**, to then recompile everything.

You can run a rule on your Makefile this way:

	make $(target_name)
	
such as:
	
	make clean
	
In the case of the target all, just type make
	
	make

<h3 align="center" id="colorful-makefile"> Colorful Makefile </h3>
	
Choose your color, add it as a variable and use in your Makefile:

	BLACK		="\[\033[0;30m\]"        
	RED		="\[\033[0;31m\]"       
	GREEN		="\[\033[0;32m\]"      
	YELLOW		="\[\033[0;33m\]"       
	BLUE		="\[\033[0;34m\]"        
	PURPLE		="\[\033[0;35m\]"     
	CYAN		="\[\033[0;36m\]"         
	WHITE		="\[\033[0;37m\]"    
	RESET		="\033[0m"

You could use it this way:
	
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"
	
So $(NAME) was deleted will be printed in red.

Cool, right?
	
Remember to reset the color when you're done, otherwise your terminal will keep with the last used colour.

<h2 align="center" id="how-does-it-work"> How does it work? </h2>
	
The functioning of the library can be explained just by breaking down the Makefile. The library functions are all coded in .c files.
These files are compiled into objects (.o) to be later inserted in the library, we do this just by compiling with the -c and -o flags.

      clang -c example1.c -o example1.o
      clang -c example2.c -o example2.o
      clang -c example3.c -o example3.o
      clang -c example4.c -o example4.o
And then using ar rcs command to create the library with all the objects.

      ar rcs libft.a example1.o example2.o example3.o example4.o

With the files transformed into objects, we don't need to compile all the code again in case there is any change, only the file that was changed would be recompiled.

The Makefile is used to automate the process as there are at least 40 files to be compiled into objects and then linked into the library.
	
<h2 align="center" id="how-do-i-use-the-library"> How do I use the library? </h2>
It aims to create a library called libft.a from the source files.

To create this library, clone the project:

    git clone https://github.com/augustobecker/libft libft
Enter the repository:

    cd libft
Run Make (to run the Makefile that will compile the source code and create the library):

    make

You should see a libft.a file and some object files (.o).

Now to clean up (removing the .o files), call make clean:

    make clean
Now you just have to add this header at your .c files and use the Libft functions:

    #include "libft.h"
If you try to compile your .c files with clang using clang example.c you will get an undefined symbol error for Libft functions.

You have to tell the file where your library resides:

    clang example.c libft.a

That's it. Now run it using ./a.out

<h2 align="center" id="how-do-i-test-it"> How do I test it? </h2>

To test the code we're going to be using @jgambard's Libft Tester. There are some good others but I'll only be covering this one.

To test the code in this repo
Clone this repo and cd into it:

    git clone https://github.com/augustobecker/libft libft
     
	cd libft/	
 
Now, clone @jgambard's Libft Tester
    
    git clone https://github.com/Tripouille/libftTester libftTester
Go into the test folder and run the mandatory test and then the bonus test:

    cd libftTester
    make m
    make b
    
If you did everything correctly you should see something like this:
![image](https://user-images.githubusercontent.com/81205527/149175403-68b2b73b-5669-45ff-a874-e95055abe0e3.png)

<h2 align="center" id="42-cursus"> 42 Cursus </h2>
	
42 is a global education initiative that proposes a new way of learning technology: no teachers, no classrooms,
students learning from their fellow students (peer to peer learning),
with a methodology that develops both computing and life skills.
Not to mention that it's completely free of charge and open to all with no prerequisites.

Admissions at 42 are unlike other colleges. We use a merit-based admission process.
The final step of the admission is the Piscine - This is part of the admissions process and 
requires 4 weeks of intensive and immersive coding. No prior coding experience is necessary at all.
	
You can check more about the admission process on the 42sp website: https://www.42sp.org.br or on my github repository: <a href="https://github.com/augustobecker/42sp_Piscine">42 Piscine</a>

To see other projects developed by me at 42, click here: <a href="https://github.com/augustobecker/42cursus">42 Cursus </a>
	
<h2  align="center" id="author">Author</h2>
<div align="center">
	<div>
	<img height="222em" src="https://user-images.githubusercontent.com/81205527/174709160-f4bc029d-b667-469b-b2a7-4e036f1c5349.png">
	</div>
	<div>
		<strong> Augusto Becker | acesar-l | 🇧🇷👨‍🚀</strong>
	
:wave: How to reach me:
    	</div> 
    	<div>
  	<a href="https://www.linkedin.com/in/augusto-becker/" target="_blank"><img align="center" alt="LinkedIn" height="60" src="https://user-images.githubusercontent.com/81205527/157161849-01a9df02-bf32-45be-add4-122bc40b48cf.png"></a>
	<a href="https://www.instagram.com/augusto.becker/" target="_blank"><img align="center" alt="Instagram" height="60" src="https://user-images.githubusercontent.com/81205527/157161841-19ec3ab2-2c8f-4ec0-8b9d-3cd885256098.png"></a>
	<a href = "mailto:augustobecker.dev@gmail.com"> <img align="center" alt="Gmail - augustobecker.dev@gmail.com" height="60" src="https://user-images.githubusercontent.com/81205527/157161831-eb9dffee-404b-4ffe-b0af-34671219f7fb.png"></a>
	<a href="https://discord.gg/3kxYkBRxUy" target="_blank"><img align="center" alt="Discord - beckerzz#3614" height="60" src="https://user-images.githubusercontent.com/81205527/157161820-de88dc63-61a3-4c9f-9445-07ac98bf0bc2.png"></a>
	</div>
</div>
