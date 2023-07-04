#include "main.h"

/**
* _strstr - Entry point function that search for substrings
* @haystack: first function passing parameter
* @needle: second function parameter
* Return: returns 0 upon succes
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
		*haystack++;
	}

	return (0);
}
