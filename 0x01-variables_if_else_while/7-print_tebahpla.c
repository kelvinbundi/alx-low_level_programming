#include <stdio.h>
#include <string.h>

/**
 * main -  prints the lowercase alphabet in reverse
 * Return: Always 0.
 */
int main(void)

{

	char x = 'z';

	while (x >= 'a')


	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
