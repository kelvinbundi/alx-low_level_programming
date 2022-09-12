#include < stdio.h>

/**
 *  main - prints all single digit numbers of base ten.
 *
 * Return: Always 0.
 */
int main(void)

{
	int x;
	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
