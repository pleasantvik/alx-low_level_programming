#include <stdio.h>

/**
 * main - Prints the letters of the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettersOfAlphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lettersOfAlphabet[i]);
	}
	putchar('\n');
	return (0);
}

