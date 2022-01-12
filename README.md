# Libft - @42sp
![image](https://user-images.githubusercontent.com/81205527/149165832-9344c9e5-6075-4268-b276-26b60efc5733.png)
## Index
* [What is libft?](#what-is-libft)
* [How does it work?](#how-does-it-work)
* [How do I use the library?](#how-do-i-use-the-library)
* [How do I test it?](#how-do-i-test-it)

## What is libft?
 The first project at 42. It consists of a static library with recoded functions from the Standard library (stdlib) that can be used as a support in
 future 42 projects, since it's not allowed to use the original functions.
 
## How does it work?

The functioning of the library can be explained just by breaking down the Makefile. The library functions are all coded in .c files.
These files are transformed into objects (.o) to be later linked in the library, we do this just by compiling with the -c flag.

      clang -c example1.c example1.o
      clang -c example2.c example2.o
      clang -c example3.c example3.o
      clang -c example4.c example4.o
And then using ar rcs command to create the library with all the objects.

      ar rcs libft.a example1.o example2.o example3.o example4.o

With the files transformed into objects, we don't need to compile all the code again in case there is any change, only the file that was changed would be recompiled.

The Makefile is used to automate the process as there are at least 40 files to be compiled into objects and then linked into the library.
 
## How do I use the library?
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
If you try to compile your .c files with gcc using clang example.c you will get an undefined symbol error for Libft functions.

You have to tell the file where your library resides and which library it's using:

    clang example.c -L. -lft

-L takes the path to your library. . in this case

-l takes the name of your library. This is the set of characters that come after lib in your library name.

That's it. Now run it using ./a.out

## How do I test it?

To test the code we're going to be using @alelievr's Libft Unit Test. There are some good others but I'll only be covering this one.

To test the code in this repo
Clone this repo and cd into it, make sure it's called libft:

      git clone https://github.com/augustobecker/libft libft
      
      cd libft/
 
Run Make so you can build the library:

      make
Go back to the root directory and clone @alelievr's Libft Unit Test:

    cd ..
    
    git clone https://github.com/alelievr/libft-unit-test libft-unit-test
Go into the test folder and run the test:

    cd libft-unit-test/
    make f
If you did everything correctly you should get a cool list of tests showing you the function names and if they passed or not.