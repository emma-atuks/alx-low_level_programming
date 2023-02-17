#include <stdio.h>

/**
 * main - Prints all the numbers in base 16 in lower cases
 * Return: Always 0
 */
int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
		putchar('\n');

	return (0);
}
