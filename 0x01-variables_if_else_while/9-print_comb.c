#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return:Always 0.
 */
int main(void)
{
	int x;
	for (x = '0';l x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x = 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
