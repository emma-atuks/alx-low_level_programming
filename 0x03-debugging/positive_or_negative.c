#include "main.c"

/**
 * positive_or_negative - check for positive or negative numbers
 *
 * @i: the number to be checked
 *
 * Return: Always 0
 *
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d/n is negative", i);
	else
		printf("%d/n is positive", i);
}
