#include<stdio.h>
/**
* main - Entry point
* Program to print all possible combination of two digits
* digit numbers
* program written George kester
* Return: Return  0 whenever it is successfull
*/
/* betty style doc for function main goes there */
int main(void)
{
int counter;
int counter1;
for (counter = 0; counter < 100; counter++)
{
	for (counter1 = 0; counter1 < 100; counter1++)
	{
		if (counter < counter1)
		{
			putchar((counter / 10) + 48);
			putchar((counter % 10) + 48);
			putchar(' ');
			putchar ((counter1 / 10) + 48);
			putchar ((counter1 % 10) + 48);
			if (counter != 98 || counter1 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
