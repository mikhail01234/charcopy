#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// example call: charcopy(&str1, &str2);  where str1 and str2 are both of char * type

void charCopy(char ** destination, char ** str)
{
	free(*destination); // in case the function has already been called before
	*destination = (char *)calloc('\0', strlen(*str) * sizeof(char));
	memcpy(*destination, *str, strlen(*str) * sizeof(char));
	return;
}

void charCopyL(char ** destination, char ** str, int length)
{
	free(*destination); // in case the function has already been called before
	*destination = (char *)calloc('\0', strlen(*str) * sizeof(char));
    int min_length = strlen(*str) < length ? strlen(*str) : length;
	memcpy(*destination, *str, min_length * sizeof(char));
	return;
}