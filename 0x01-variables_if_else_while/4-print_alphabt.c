#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print the alphabet without e and q.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (1 != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
