crsmake
=======

Crossmake - Makes architecture specific code and cross compiling easy.

Crossmake is a tool to compile projects that support multiple architectures and will configure, make, and optionally run your projects. This is a very (early) alternative to complex things like CMAKE.

How it works
-------
On launch it looks for the crsmake.csv file. Yes; a human readable comma seperated list (to make it git friendly).
The crsmake.csv file has lists of rules for it to follow. The syntax allows for enviroment and argument variables.
Example:

	rule, action(:params),data
	
	global, compile,*.cpp
	global, set compiler:c,clang
	global, set compiler:c++,clang
	global, set make, make
	global, set make output, Makefile
	global, set output,crsmake
	global, set executable,crsmake

The syntax is:

	rule, action(:params),data
	
It then, based on these rules generates a makefile. Then it calls make
