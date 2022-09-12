#include <stdio.h>
/**
 * main - prints alphabets inlower case.
 * Return: Always 0.
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
