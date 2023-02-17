#include <stdio.h>
/**
 * main - Prints lower cases in reverse and a new line
 * Return: Always 0
 */
int main(void)
{
	char le;

	for (le = 'z';  le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
