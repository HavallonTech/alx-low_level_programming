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
int counter, counter2;
for (counter = 48; counter < 58; counter++)
{
	for (counter2 = 48; counter2 < 58; counter2++)
	{
		if (counter2 > counter)
		{

			putchar(counter);
			putchar(counter2);
			if (counter != 56 || counter2 != 57)
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
