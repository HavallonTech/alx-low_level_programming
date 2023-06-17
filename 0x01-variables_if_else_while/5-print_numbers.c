#include<stdio.h>
/**
* main - Entry point
* Program to print 1 to 9
*Program written by George kester
* Return: Return  0 whenever it is successfull
*/
/* betty style doc for function main goes there */
int main(void)
{
int counter;
for (counter = 1; counter < 10; counter++)
	printf("%d", counter);
printf('\n');
return (0);
}
