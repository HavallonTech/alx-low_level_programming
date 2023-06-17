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
char thealphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int counter;
for (counter = 0; counter < 26; counter++)
{
	putchar(thealphabet[counter]);
}
putchar('\n');
char lowercase[26] = "abcdefghijklmnopqrstuvwxyz";
for (counter = 0; counter < 26; counter++)
{
	putchar(lowercase[counter]);
}
return (0);
}
