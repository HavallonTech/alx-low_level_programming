#include "main.h"
#include <stdio.h>

/**
 * rot13 - a dunction that encodes using encoder rot13
 * @s: pointer to string parameter to be received
 * Return: *s pointer
 */

char *rot13(char *s)
{
	int code1;
	int code2;

	char datainput1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datareturn[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (code1 = 0; s[code1] != '\0'; code1++)
	{
		for (code2 = 0; code2 < 52; code2++)
		{
			if (s[code1] == datainput1[code2])
			{
				s[code1] = datareturn[code2];
				break;
			}
		}
	}
	return (s);
}
