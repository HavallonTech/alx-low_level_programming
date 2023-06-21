#include "main.h"
/**
 * jack_bauer - print every minute of the day
 * return : void return type since it is printing
 * minutes starts from 00:00 to 23:59
*/

void jack_bauer(void)
{
int minutesc;
int hours;
for (hours = 0; hours < 24; hours++)
{
	for (minutesc = 0; minutesc < 60; minutesc++)
	{
		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		_putchar(':');
		_putchar((minutesc / 10) + '0');
		_putchar((minutesc % 10) + '0');
		_putchar('\n');
	}
}
}
