#include "main.h"

/**
 * cap_string - a funttion that Capitalizes all words of a string
 * @str: The string passed that will be capitalized
 * Return: A pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int stringindex = 0;

	while (str[stringindex])
	{
		while (!(str[stringindex] >= 'a' && str[stringindex] <= 'z'))
			stringindex = stringindex + 1;

		if (str[stringindex - 1] == ' ' ||
				str[stringindex - 1] == '\t' ||
				str[stringindex - 1] == ')' ||
				str[stringindex - 1] == '{' ||
				str[stringindex - 1] == '\n' ||
				str[stringindex - 1] == '?' ||
				str[stringindex - 1] == '"' ||
				str[stringindex - 1] == '(' ||
				str[stringindex - 1] == ',' ||
				str[stringindex - 1] == ';' ||
				str[stringindex - 1] == '.' ||
				str[stringindex - 1] == '!' ||
				str[stringindex - 1] == '}' || stringindex == 0)
			str[stringindex] -= 32;
		stringindex = stringindex + 1;
	}

	return (str);
}
