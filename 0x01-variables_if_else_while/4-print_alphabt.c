#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0 Value if it works
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')


	{
		if (x != 'e' && x != 'q')

		{
			putchar(x);
			x++;
		}
	}
	putchar('\n');
	return (0);
}
