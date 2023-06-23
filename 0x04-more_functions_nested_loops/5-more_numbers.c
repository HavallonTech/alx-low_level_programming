#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * return: void since there is no value to return
 */

void more_numbers(void)
{
	int j;

	int i;

	j = 0;
	while (j <= 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
				_putchar ('1');
			_putchar (i % 10 + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
