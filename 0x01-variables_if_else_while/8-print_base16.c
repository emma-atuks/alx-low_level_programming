#include <stdio.h>

/**
 * main - Prints all the numbers in base 16 in lower cases
 * Return: Always 0
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)

		putchar('\n');

	return (0);
}
