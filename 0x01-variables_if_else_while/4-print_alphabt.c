#include <stdio.h>

/**
 * main - Prints alphabet in lowercase except q and e and then a new line
 *
 * Return: Always 0
 *
 */
int main(void)
{
	cha la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
