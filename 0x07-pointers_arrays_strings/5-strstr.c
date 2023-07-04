#include "main.h"
/**
* _strstr - A function that loctaes a sub string
* @haystack: first function parameter
* @needle: second function parameter
* Return : 0 when succesful
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
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
	}

	return (0);
}i
