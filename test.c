#include "charcopy.h"
#include <stdio.h>

int main()
{
    char * first = "Hello";
    char second = ' ';
    char * third = "World!";
    char * fourth = "!!!!!!!!!!!!";

    char *result;
    charCopy(&result, &first);
    printf("1) %s\n", result);
    charConcat1(&result, second);
    printf("2) %s\n", result);
    charConcat(&result, &third);
    printf("3) %s\n", result);
    charConcatL(&result, &fourth, 5);
    printf("4) %s\n", result);
    charCopyL(&result, &first, 4);
    printf("5) %s\n", result);
}