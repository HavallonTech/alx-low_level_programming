#include<stdio.h>
/**
* main - Entry point
* Program to print all possible combination of single
* digit numbers
* program written George kester
* Return: Return  0 whenever it is successfull
*/
/* betty style doc for function main goes there */
int main(void)
{
int counter;
int counter1;
int counter2;
for (counter = 48; counter < 58; counter++)
{
	for (counter1 = 49; counter1 < 58; counter1++)
	{
		for (counter2 = 50; counter2 < 58; counter2++)
		{
			if (counter2 > counter1 && counter1 > counter)
			{
				putchar(counter);
				putchar(counter1);
				putchar(counter2);
				if (counter != 55 || counter1 != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
