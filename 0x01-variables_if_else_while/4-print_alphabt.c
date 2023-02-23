#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar (alph[i]);
	}
	putchar('\n');
	return (0);
}
