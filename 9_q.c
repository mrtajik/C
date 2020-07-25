/* Writing Large Programs */
/*
	Source Files:
	--Group related functions and variables into single file
	--Each source file can be compiled separately
	--Functions easily reused in other programs when grouped
	in separate source files.


	Header Files:
	--to insert contents of one source file into other use #include
	Example: #include <filename> or #include "filename"

	#include <filename> ---search in the directory in which system header files reside;

	#include "filename" ---search in current directory, then search system directory;

	Header files have extension ".h" (mostly)
*/