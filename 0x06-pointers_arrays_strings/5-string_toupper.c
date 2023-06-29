#include "main.h"
/**
 * string_toupper - a function to change all lowercase to uppercase
 * @n: pointer
 * Return: n to the calling program
 */
char *string_toupper(char *n)
{
	int counter;

	counter = 0;

	while (n[counter] != '\0')
	{
		/** if character is lowercase convert to upper */
		/* by sbutracting  32 from the ASCII coding */
		if (n[counter] >= 'a' && n[counter] <= 'z')
		{
			n[counter] = n[counter] - 32;
		}
		/** next charactrer if iterated here */
		counter = counter + 1;
	}
return (n);
}
