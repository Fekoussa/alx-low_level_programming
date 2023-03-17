#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the situation of number if positive or negative or zero
 *
 * return (success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
return (0);
}
else if (n == 0)
{
printf("%d is zero\n", n);
return (0);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
