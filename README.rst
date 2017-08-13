Programming C and C++
====================================================

Compiling C programs with gcc
----------------------------------------------------

The base command for the Gnu C compiler is gcc.

This output option (-o) is usually given as the last argument on the command line. If it is omitted, the output is written to a default file called ‘a.out’.

The option -Wall turns on all the most commonly-used compiler warnings---it is recommended that you always use this option.

Specifying standard and warnings following gcc documentation:

.. code-block:: bash

  $ gcc -Wall -std=c99 -pedantic hello.c -o hello 


Compiling C++ programs with g++
----------------------------------------------------

The base command for the Gnu C++ compiler is g++.

Specifying standard and warnings following gcc documentation:

.. code-block:: bash

  $ g++ -Wall -std=c++11 hello_world.cpp -o hello_world 


Single File Programs
----------------------------------------------------

To compile a program that is in a single file, the easiest compilation
uses the command format:

.. code-block:: bash

  $ g++ <filename>

(where the filename ends with ".cpp").

.. code-block:: bash

  $ g++ prog1.cpp

This command will create an executable program called "a.out" (the default
executable target name when one is not specified).


C preprocessor
---------------------------------------------------------

List include directories.

.. code-block:: bash

  $ cpp -v /dev/null -o /dev/null


The -E option causes gcc to run the preprocessor, display the expanded output, and then exit without compiling the resulting source code. 

.. code-block:: bash

  $ gcc -v -E -


Multiple file programs
----------------------

To invoke the Compile stage, which translates source code (.cpp files)
into object code (.o files), use the -c flag.  Format:

.. code-block:: bash

  $ g++ -c <filename>

When the -c option is NOT used, the compiler will expect the command to 
give everything necessary to compile AND link -- to make the executable.

A few examples:

.. code-block:: bash

  $ g++ -c fraction.cpp -o yadda.o

This command invokes just the compile stage on fraction.cpp, but names the 
object code file "yadda.o" (instead of the default "fraction.o").

.. code-block:: bash

  $ g++ circle.o main.o -o bob.exe 

This command links the two object code files ("circle.o" and "main.o") 
into an executable, called "bob.exe" (instead of the default "a.out").

.. code-block:: bash

  $ g++ thing.cpp main.cpp -o myProgram 

This command compiles and links (since -c not used) the code files 
"thing.cpp" and "main.cpp" together into the executable program called 
"myProgram".

There are other command formats, flags,  and shortcuts, which are not
listed here.  The above commands are sufficient for basic compilation needs.

---------------------------------------------------------------------

Example:
--------

The following example is the step by step compilation of the files for
the fraction class example.

To compile the cpp files into object code:

.. code-block:: bash

  $ g++ -c frac.cpp
  $ g++ -c main.cpp

Now, the object code files frac.o and main.o have been created.

To link the object code:

.. code-block:: bash

  $ g++ frac.o main.o -o frac 

This creates the executable "frac"

run the program:

.. code-block:: bash

  $ ./frac


Docker
----------------------------------------------------


.. code-block:: bash

  $ docker run -it -w /root -v "$PWD":/root --name mycpp-1 --hostname mycpp-1 gcc:7.1.0

Start the container later and get a bash command line.

.. code-block:: bash

  $ docker start mycpp-1
  $ docker exec -it mycpp-1 /bin/bash

Links
----------------------------------------------------

`An introduction to GCC <http://www.network-theory.co.uk/docs/gccintro/>`_
