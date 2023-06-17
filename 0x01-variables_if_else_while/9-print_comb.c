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
for (counter = 48; counter < 58; counter++)
{
	putchar(counter);
	if (counter != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
