#include <stdio.h>
/**
* main - Entry point
*Program written by George kester
* Return: 0 whenever it is succesfull
*/
int main()
{
int sizeint = sizeof(int);
int sizelong = sizeof(long);
int sizeshort = sizeof(short);
int sizefloat = sizeof(float);
int sizechar = sizeof(char);
//int sizelong = sizeof(long);
printf("Size of a char: %d byte(s)\n", sizechar);
printf("Size of an int: %d byte(s)\n", sizeint);
printf("Size of a long int: %d byte(s)\n", sizelong);
printf("Size of a short: %d byte(s)\n", sizeshort);
printf("Size of a float: %d byte(s)\n", sizefloat);
return (0);
}
