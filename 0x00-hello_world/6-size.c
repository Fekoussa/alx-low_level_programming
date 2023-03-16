#include <stdio.h>

/**
*main Entry point
*Descriptin : using sizeof to print the size of various types.
*Return: Always 0 (success)
*/
int main(void)
{
char charType;
int integerType;
long longType;
long long longlongType;
float floatType;
printf("Size of a char: %u byte(s)\n", sizeof(charType));
printf("Size of an int: %u byte(s)\n", sizeof(integerType));
printf("Size of a long int: %u byte(s)\n", sizeof(longType));
printf("Size of a long long int: %u byte(s)\n", sizeof(longlongType));
printf("Size of a float: %u byte(s)\n", sizeof(floatType));
return (0);
}
