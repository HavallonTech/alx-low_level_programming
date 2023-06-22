#include "main.h"

/**
 * print_most_numbers -funtion to  print 01356789 using _putchar only
 * return: void since there is no value to return
 */

void print_most_numbers(void)
{
	char mychar;

	mychar = '0';
	while (mychar <= '9')
	{
		if (!(mychar == '4' || mychar == '2'))
			_putchar(mychar);
		mychar++;
	}
	_putchar('\n');
}
