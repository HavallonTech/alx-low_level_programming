#include<stdio.h>
/**
* main - Entry point
* Program to print 0-9-f hexadecimal
* program written George kester
* Return: Return  0 whenever it is successfull
*/
/* betty style doc for function main goes there */
int main(void)
{
int counter;
for (counter = 48; counter < 58; counter++)
	putchar(counter);
for (counter = 97; counter <= 102; counter++)
	putchar(counter);
putchar('\n');
return (0);
}
