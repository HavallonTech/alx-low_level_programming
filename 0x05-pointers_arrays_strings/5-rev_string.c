#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: Input string
 * Return: String in reversed order
 */

void rev_string(char *s)
{
	char rev = s[0];
	int k = 0;
	int kes;

	while (s[k] != '\0')
	counter++;
	for (kes = 0; kes < k; kes++)
	{
		k--;
		rev = s[kes];
		s[kes] = s[k];
		s[k] = rev;
	}
}
