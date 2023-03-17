#include <stdio.h>
/**
 * main - Entry point
 * Description :  prints the alphabet in lowercase
 * Return 0 (Success)
 */
int main(void)
{
	char i = 'a';
	char k = 'A';

	while (i <= 'z')
	{
	putchar(i);
	i++;
	}
	while (k <= 'Z')
	{
	putchar(k);
	k++;
	}
	putchar('\n');
	return (0);
}
