*************************************************************************
*
*  Cocktail
*  ========
*
*  Compiler Compiler Toolbox Karlsruhe
*  -----------------------------------
*
*  Version 2110
*
*  Copyright 2021 Dr. Josef Grosch, CoCoLab
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*
*  You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
*  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*  See the License for the specific language governing permissions and
*  limitations under the License.
*
*  Dr. Josef Grosch
*  CoCoLab - Datenverarbeitung
*  Breslauer Str. 64c
*  76139 Karlsruhe
*  Germany
*
*  Phone   : +49-721-91537544
*  Fax     : +49-721-91537543
*  Email   : grosch@cocolab.com
*  Internet: www.cocolab.com
*
*************************************************************************

Direct requests, comments, questions, and error reports to the address above.


Contents
--------

1.   Source Directory
2.   Documentation
3.   References
4.   Machine Dependencies
5.   Installation
5.1. Installation from CD-ROM
5.2. Installation of Binary Releases
5.3. Installation of Source Release
5.4. Installation under Unix
5.5. Installation under Microsoft Windows
6.   Graphic User Interfaces


1. Source Directory
-------------------

The source directory of Cocktail contains the following files and
subdirectories:

file/directory  contents
------------------------------------------------------------------------
README          this file
ChangeLog       description of the changes wrt. to previous versions of Cocktail
Makefile.in     compilation, installation, and test of the tools (Unix)
Makefile.config configuration for the implementation language Java
config          shell script to configure (= create) a Makefile
config.in       specification to generate the file config using autoconf
config.h        include file with configuration values determined by config
config.hin      input for the creation of the file config.h
config.d        directory with config.h files for several platforms
config.bat      configuration of the tools (Windows)
comp_mvc.bat    compilation   of the tools (Windows, MS Visual C++)
inst_mvc.bat    installation  of the tools (Windows, MS Visual C++)
test_mvc.bat    test          of the tools (Windows)
clean.bat       clean the source tree
instmvc2.bat    support for the Windows scripts
make_mvc.bat    ditto
clean_2.bat     ditto
doc.pdf         documentation in PDF  format
doc.html        documentation in HTML format (for reuse library in Java, only)
doc.txt         documentation in text format (without pictures)
man             manual pages  in troff format, man macros
reuse           Library of Reusable Modules (needed for all programs)
rex             Scanner Generator
lark            LALR(2) and LR(1) Parser Generator with Backtracking
ell             LL(1) Recursive Descent Parser Generator
bnf             Transforms Grammars from Extended BNF to Plain BNF
front           Front-End of Bnf
cg              Common Program implementing Ast and Ag
                Ast = Generator for Abstract Syntax Trees
                Ag  = Attribute Evaluator Generator
puma            Transformation Tool based on Pattern Matching
l2r             Transforms Lex  input to Rex  input
y2l             Transforms Yacc input to Lark input
r2l             Transforms Rex  input to Lex  input
l2cg            Transforms Lark input to Cg   input
lpp             Preprocessor for Lark
rpp             Rex PreProcessor: Rpp + Lpp extract most of a scanner
                specification out of a parser specification
tidy            PostProcessor for Cg used for generating Java source code
examples        Example specifications for the Cocktail Tools

The names of the subdirectories of the tools indicate the following types of
information:

subdirectory    contents
------------------------------------------------------------------------
m2c             source files in C (obfuscated)
c               source files in C
cpp             source files in C++
src             source files in Modula-2
java            source files in Java
ada             source files in Ada
eiffel          source files in Eiffel
lib             data files and skeleton files
test            test environment for a tool


2. Documentation
----------------

The directories doc.pdf, doc.html, and doc.txt contain documentation in PDF
format, HTML format (for reuse library in Java, only), and text format (without
pictures). The document entitled "Toolbox Introduction" in the files intro.pdf
or intro.txt gives an overview and introduces into the toolbox. It should be
read first. The following documents are available:

Filename   Title
------------------------------------------------------------------------
intro      Toolbox Introduction
toolbox    A Tool Box for Compiler Construction
werkzeuge  Werkzeuge fu"r den U"bersetzerbau (in German)
reuseC     Reusable Software - A Collection of C-Modules
reuse      Reusable Software - A Collection of Modula-2-Modules
prepro     Preprocessors
rex        Rex - A Scanner Generator
scanex     Selected Examples of Scanner Specifications
scangen    Efficient Generation of Table-Driven Scanners
lark       Lark - An LALR(2) Parser Generator With Backtracking
ell-bnf    The Parser Generator Ell
ell        Efficient and Comfortable Error Recovery in Recursive Descent Parsers
highspeed  Generators for High-Speed Front-Ends
autogen    Automatische Generierung effizienter Compiler (in German)
ast        Ast - A Generator for Abstract Syntax Trees
toolsupp   Tool Support for Data Structures
ag         Ag - An Attribute Evaluator Generator
ooags      Object-Oriented Attribute Grammars
multiple   Multiple Inheritance in Object-Oriented Attribute Grammars
objects    Object-Orientation in the Cocktail Toolbox
puma       Puma - A Generator for the Transformation of Attributed Trees
trafo      Transformation of Attributed Trees Using Pattern Matching
wag        Efficient Evaluation of Well-Formed Attribute Grammars And Beyond
minilax    Specification of a MiniLAX-Interpreter
cookbook   Semantic Analysis Cookbook - Part 1: Declarations
faq        Cocktail FAQ - Frequently Asked Questions


3. References
-------------

1.   J. Grosch, `Generators  for  High-Speed  Front-Ends',  LNCS,
     371, 81-92 (Oct. 1988), Springer Verlag.

2.   H. Emmelmann, F. W. Schroeer, Rudolf Landwehr, ` BEG - a Generator
     for Efficient Back Ends', Sigplan Notices, 24, 227-237 (Jul. 1989)

3.   W. M. Waite, J. Grosch and F. W.  Schroeer,  `Three  Compiler
     Specifications', GMD-Studie Nr. 166, GMD Forschungsstelle an
     der Universitaet Karlsruhe, Aug. 1989.

4.   J. Grosch,  `Efficient  Generation  of  Lexical  Analysers',
     Software-Practice & Experience, 19, 1089-1103 (Nov. 1989).

5.   J. Grosch, `Efficient and Comfortable Error Recovery in Recursive
     Descent Parsers', Structured Programming, 11, 129-140 (1990).

6.   J. Grosch, H. Emmelmann, `A Tool Box for Compiler Construction',
     LNCS, 477, 106-116 (Oct. 1990), Springer Verlag.

7.   J. Grosch, `Object-Oriented Attribute Grammars', in: Proceedings of the
     Fifth International Symposium on Computer and Information Sciences (ISCIS V)
     (Eds. A. E. Harmanci, E. Gelenbe), Cappadocia, Nevsehir, Turkey, 807-816,
     (Oct. 1990).

8.   J. Grosch,  `Lalr - a Generator for Efficient Parsers',
     Software-Practice & Experience, 20, 1115-1135 (Nov. 1990).

9.   J. Grosch, `Tool Support for Data Structures',
     Structured Programming, 12, 31-38 (1991).

10.  U. Assmann, H. Emmelmann, J. Grosch, `Stein auf Stein -
     Cocktail: Eine Compiler-Compiler-Toolbox', iX 2/1992, 123-127.

11.  J. Grosch, `Transformation of Attributed Trees Using Pattern Matching',
     LNCS, 641, 1-15 (Oct. 1992), Springer Verlag.

12.  R. M. Bates, `Examining the Cocktail Toolbox',
     Dr. Dobb's Journal, #245 March 1996, 78-82, 95-96.


4. Machine Dependencies
-----------------------

All machine dependent code is isolated in the file rSystem.c which is written
in C. This file is set up to work under Unix and all versions of Microsoft
Windows. There are several copies of this file in the following directories:

   reuse/c
   reuse/cpp
   reuse/src
   reuse/m2c
   reuse/ada


5. Installation
---------------

The installation of Cocktail depends on the distribution media, the kind of the
release, and the operating system:

Distribution media         : Internet or CD-ROM (ISO 9660 format)
Kind of release            : binary or source
Supported operating systems: Unix (e. g. Linux, Solaris, AIX),
                             Windows (9x, ME, NT, 2000, XP, Vista, 7, 8, 10)

The requirements for disk space are as follows:

   source release (sources and documentation)  24 MB  (uncompressed)
   documentation                                8 MB  (uncompressed)
   source release (sources and documentation)   5 MB  (compressed)
   binary release                               8 MB  (uncompressed)
   binary release                               2 MB  (compressed)
   compilation                                 80 MB

5.1. Installation from CD-ROM or from the Internet
--------------------------------------------------

Check whether there is a binary release available for your platform.
Binary releases should be preferred because they can be installed simply and
quickly whereas the source release requires compilation of the source code.
For this version of Cocktail the available binary releases are listed
in the top-level README file.

5.2. Installation of Binary Releases
------------------------------------

For the installation of a binary release run a suitable installer. The
installers are selfextracting archives with the file extensions .sh or .exe.
Please note, you have to have write permission for the installation directory.
On Unix, the path <directory>/bin has to be added to the environment variable
PATH.

5.3. Installation of Source Release
-----------------------------------

The building of Cocktail from the source code depends on the operating system.
The details of this procedure are described in the following sections.

5.4. Installation under Unix
----------------------------

The Makefile at the global level controls the compilation and installation
of the individual tools. It activates the tool specific Makefiles.
It is generated out of the file Makefile.in using GNU's configure mechanism.

1. Download the source code from the Internet or copy it from CD to disk:

      cp /cdrom/cocktail-2110-src.zip $HOME     # copy from CD

   This assumes the Cocktail CD is mounted on the mount point /cdrom.
   Here we have chosen $HOME as working directory.

2. Unpack the source code archive:

      unzip -q cocktail-2110-src.zip

3. Enter the top-level directory:

      cd cocktail-2110-src

4. Configure (= create) a Makefile by executing:

      ./config CC="cc -m32"

   Note, on AIX use:

      ./config CC="xlc" CXX="xlC -qstaticinline"

   Note, the configuration for the implementation language Java has to be done
   manually by editing the file Makefile.config.

5. Edit the first couple of lines in the file Makefile if necessary in order to
   accommodate your needs or use arguments such as DIR=... for the 'make'
   commands in the subsequent steps. The default value for DIR is /usr/local.
   Step 7 will create subdirectories called bin, lib/cocktail, and man/man1
   in the directory DIR.

   Although the configure mechanism is quite helpful, it is not perfect.
   The following drawbacks are known:

   - If there is no C++ compiler then the variable CPPC might be falsely set to
     gcc. This should be changed to the value ':':

      CPPC = :

6. Compile the source code by executing:

      make

7. Install Cocktail by executing:

      make install DIR=...

   The argument DIR is optional and defaults to /usr/local. An example might be:

      make install DIR=$HOME/cocktail

   Note, the path DIR/bin has to be added to the environment variable PATH.

8. The libraries for C, C++, and Modula-2 in the directories reuse/c, reuse/cpp,
   and reuse/src are initialized automatically during step 6. The libraries for
   Java, Ada, and Eiffel have to be initialized manually in case they are
   needed:

      cd reuse/java; make
      cd ../ada; make
      cd ../eiffel; make

9. When using a shell like 'csh' it might be necessary to run 'rehash' in order
   to notify the shell about the installation of the Cocktail tools.

10. Optionally test Cocktail by executing:

      make test LIB=/usr/local/lib/cocktail

   The parameter LIB has to refer to the subdirectory 'lib/cocktail' of the
   directory where Cocktail is installed. The test generates and compiles
   scanners and parsers for those example grammars in the file tree 'examples'
   where the implementation language is C, C++, or Modula-2. The test will
   produce around 800 lines of output. Tests for other implementation languages
   or for individual languages can be started by commands such as:

      make test_c   LIB=/usr/local/lib/cocktail
      make test_cpp LIB=/usr/local/lib/cocktail
      make test_modula
      make test_java
      make test_ada
      make test_eiffel


5.5. Installation under Microsoft Windows
-----------------------------------------

Requirements to run the binaries:

   - 80386 CPU or better
   - at least 6 MB memory

Requirements to compile the sources:

   - C compiler: for example
        Microsoft Visual C++ (for Windows)
        GNU CC ported by Cygwin (for Windows)
   - Microsoft nmake or GNU make (or similar make utility)
   - ar and ranlib (archive handling, for GNU CC only)

The software of the Cygwin GCC port to 32 bit Windows is available e. g. from:

   http://www.cygwin.com/

The above compilers are known to be able to compile the sources of Cocktail.
Probably other compilers will work as well. In general, the compiler should be
a 32 or 64 bit compiler with no restrictions such as e. g. array size <= 64 K
or stack size <= 64 K.


The installation of Cocktail from the source code proceeds as follows:
There are several batch files at the global level for compilation and
installation of the individual tools. These activate either tool specific batch
files or MS nmake or GNU make which are controlled by tool specific Makefiles.
The commands for installation have to be executed from a command window.

1. Download the source code from the Internet or copy it from CD to disk:

      copy E:\cocktail-2110-src.zip C:\

   This assumes the Cocktail CD has the drive letter E:.
   Here we have chosen C:\ as working directory.

2. Unpack the source code archive using for example WinZip.

3. Enter the top-level directory:

      cd C:\cocktail-2110-src

4. Edit the file config.bat: It defines an environment variable specifying a
   directory that will store the binaries and the data files of the tools.
   For example:

      set CT_DIR="C:\Program Files\Cocktail"

   Replace the drive letter (C:) by the appropriate one (e. g. D:). Also, the
   variable PATH is extended so that the system finds the Cocktail programs:

      set PATH=%CT_DIR%\BIN;%PATH%

5. Run the file config.bat:

      config

   Note, this command will set the environment variables CT_DIR and PATH for
   the current command window, only. These settings should be made permanent
   as well via <Control Panel:System:Advanced:Environment Variables>.

6. For MS Visual C++ setup for using the compiler from the command line, e. g.:

      vcvars32

7. Compile the source code by executing:

      comp_mvc

   Note, when you use Microsoft Visual C++ version 6.0 then the compiler option
   /O2 should not be set because it is known to cause the generation of buggy
   machine code.

8. Install Cocktail by executing:

      inst_mvc

9. Optionally test Cocktail by executing:

      test_mvc

   The test generates scanners and parsers for those example grammars in the
   file tree 'examples' where the implementation language is C or C++.
   The test will produce around 800 lines of output.


6. Graphic User Interfaces
--------------------------

Two tools can generate C or C++ code which uses a graphic user interface:
The parser generator Lark supports graphic visualization of parsing.
The tool Ast can provide a graphic browser for trees and graphs.
Both graphic user interfaces are implemented with the Tcl/Tk toolkit.
This software is distributed freely by the Tcl community:

   http://tcl.sourceforge.net   or
   http://www.tcl.tk            or
   http://tcl.ActiveState.com

For example a binary release for Windows of Tcl/Tk 8.3.2 is contained in a
file named tcl832.exe. The unified source release of Tcl/Tk 8.5 for all
supported platforms can be found in files called tcl8.5.4-src.tar.gz and
tk8.5.4-src.tar.gz.

For Windows we prefer the outdated version Tcl/Tk 8.3.2 because of its small
footprint. Newer versions will work as well, but will take more disk space.
Tcl/Tk 8.3.2 with an installer for Windows 7 is available from CoCoLab:

   ftp://www.cocolab.com/download/Tcl-8.3.2-win-x86-32.exe

