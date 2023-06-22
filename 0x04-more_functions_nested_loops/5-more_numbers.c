#include "main.h"

/**
 * more_numbers -funtion to  print 10X the number
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
			if (i >= 10)
				_putchar(1);
			_putchar (i % 10 + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
