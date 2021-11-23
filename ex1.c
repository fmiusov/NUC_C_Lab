//.h is a header file, and include imports. header files contain lists of functions to use 
#include <stdio.h>

//Multiline comment
/* This is a comment. */

//The operating system loads the program and c runs function main
int main(int argc, char *argv[])
{
	int distance = 100;

	// this is also a comment
	printf("You are %d miles away.\n", distance);
	//return from main function, passed exit value of 0
	return 0;
}
