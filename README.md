<h1 align="center">  Libft - @42sp </h1>

<p align="center">:information_source: A C static library with recoded standard functions </p>

<img src="https://user-images.githubusercontent.com/81205527/149165832-9344c9e5-6075-4268-b276-26b60efc5733.png">

## Index
* [What is Libft?](#what-is-libft)
* [Requirements](#requirements)
* [How does it work?](#how-does-it-work)
* [How do I use the library?](#how-do-i-use-the-library)
* [How do I test it?](#how-do-i-test-it)

<h2 align="center" id="what-is-libft"> What is Libft? </h2>

 The first project at 42 programming school. It consists of a static library with recoded standard functions in C that runs and compiles the code using a Makefile.
 The library can be used as a support in future school's projects, since it's not allowed to use the original functions. 
 
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
  
<h2 align="center" id="how-does-it-work"> How does it work? </h2>

The functioning of the library can be explained just by breaking down the Makefile. The library functions are all coded in .c files.
These files are compiled into objects (.o) to be later inserted in the library, we do this just by compiling with the -c flag.

      clang -c example1.c example1.o
      clang -c example2.c example2.o
      clang -c example3.c example3.o
      clang -c example4.c example4.o
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

You have to tell the file where your library resides and which library it's using:

    clang example.c -L. -lft

-L takes the path to your library. . in this case

-l takes the name of your library. This is the set of characters that come after lib in your library name.

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
