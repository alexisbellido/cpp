# cpp
Programming C++

Compiling on Ubuntu with something like this:

g++ -Wall -std=c++11 -o hello_world hello_world.cp

===

Compiling C++ programs with g++
-------------------------------

The base command for the Gnu C compiler is "gcc"
The base command for the Gnu C++ compiler is "g++"

Single File Programs
--------------------

To compile a program that is in a single file, the easiest compilation
uses the command format:

   g++ <filename>

(where the filename ends with ".cpp").

Example:
    g++ prog1.cpp

This command will create an executable program called "a.out" (the default
executable target name when one is not specified).

---------------------------------------------------------

Multiple File Programs
----------------------

To invoke the Compile stage, which translates source code (.cpp files)
into object code (.o files), use the -c flag.  Format:

  g++ -c <filename>

When the -c option is NOT used, the compiler will expect the command to 
give everything necessary to compile AND link -- to make the executable.

To name a target (something other than the default filename, use the -o flag.  
Format:

  g++ -o <target_name> <remainder of command>

A few examples:

  g++ -o yadda.o -c fraction.cpp

This command invokes just the compile stage on fraction.cpp, but names the 
object code file "yadda.o" (instead of the default "fraction.o").

  g++ -o bob.exe circle.o main.o

This command links the two object code files ("circle.o" and "main.o") 
into an executable, called "bob.exe" (instead of the default "a.out").

  g++ -o myProgram thing.cpp main.cpp

This command compiles and links (since -c not used) the code files 
"thing.cpp" and "main.cpp" together into the executable program called 
"myProgram".

There are other command formats, flags,  and shortcuts, which are not
listed here.  The above commands are sufficient for basic compilation
needs.
---------------------------------------------------------------------

Example:
--------

The following example is the step by step compilation of the files for
the fraction class example.

  To compile the cpp files into object code:
                    g++ -c frac.cpp
                    g++ -c main.cpp

  Now, the object code files frac.o and main.o have been created.

  To link the object code:              g++ -o frac frac.o main.o

  This creates the executable "frac"

  run the program:                      frac


===

From class, the UNIX/linux question was: given a bunch of object files, what flag says just link 'em?

The call to the g++ routine is:
g++ -flags file1.ext file2.ext ... 
If the flag is -c:
-c
Compile or assemble the source files, BUT DO NOT LINK.
The linking stage simply is not done. The ultimate output is in the form of an object file for each source file.
By default, the object file name for a source file is made by replacing the suffix `.c', `.i', `.s', etc., with `.o'.
Unrecognized input files, not requiring compilation or assembly, are ignored.
-o <filename>
used to rename the output file (the executable) to filename
(useless with -c - not sure which has priority)
The extension informs the comiler of what to do.
file.c
C source code which must be preprocessed so preprocessing is done before compiling to object
          With no flags that stop linkage, linkage follows compilation
file.cc
file.cpp
file.CPP
file.c++
C++ source code which must be preprocessed so preprocessing is done before compiling to object
          With no flags that stop linkage, linkage follows compilation
other
An object file to be fed straight into linking. Any file name with no recognized suffix is treated this way (as if .o)
          With no flags that stop linkage, linkage happens
So we were all correct in rmembering (or not).
There is no flag for just linking!!!
g++ objectfile-1, objectfile-2, ... [only object files in the list] 

does just linkage because none of the object files need compilation.
(and the output file will be a.out)
This would generate only linktime errors.
