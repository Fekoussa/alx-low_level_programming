#include <stdio.h>
/**
 * main - Entry point
 *
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
