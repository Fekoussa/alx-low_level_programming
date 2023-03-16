#include <stdio.h>

/**
*main Entry point
*
*Descriptin : using sizeof to print the size of various types.
*
*Return: Always 0 (success)
*/

int main(void)
{
char charType;
int integerType;
long longType;
long long longlongType;
float floatType;
printf("Size of a char: %lu byte(s)\n".sizeof(char));
printf("Size of an int: %lu byte(s)\n".sizeof(int));
printf("Size of a long int: %lu byte(s)\n".sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n".sizeof(long long int));
printf("Size of a float: %lu byte(s)\n".sizeof(float));
return (0);
}
