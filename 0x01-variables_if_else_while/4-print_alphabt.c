#include<stdio.h>
/**
* main - Entry point
* Program to print lowercase of alphabet
*Program written by George kester
* Return: Return  0 whenever it is successfull
*/
/* betty style doc for function main goes there */
int main(void)
{
int counter;
for (counter = 97; counter < 123; counter++)
{
	if ((counter !=113) && (counter !=101))
		putchar(counter);
}
putchar('\n');
return (0);
}
