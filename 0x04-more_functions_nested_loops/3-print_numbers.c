#include "main.h"

/**
 * print_numbers -funtion to  print 0-9 using putchar only
 * return: void since there is no value to return
 */

void print_numbers(void)
{
	char mychar;

	mychar = '0';
	while (mychar <= '9')
	{
		_putchar(mychar);
		mychar++;
	}
	_putchar('\n');
}
