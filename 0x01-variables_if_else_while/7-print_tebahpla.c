#include<stdio.h>
/**
* main - Entry point
* Program to print alphabet in reverse order
* program written George kester
* Return: Return  0 whenever it is successfull
*/
/* betty style doc for function main goes there */
int main(void)
{
int counter;
for (counter = 122; counter >= 97; counter--)
	putchar(counter);
putchar('\n');
return (0);
}
