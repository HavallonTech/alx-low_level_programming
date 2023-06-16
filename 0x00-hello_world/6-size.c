#include <stdio.h>
/**
* main - Entry point
*Program written by George kester
* Return: 0 whenever it is succesfull
*/
int main(void)
{
int sizeint = sizeof(int);
int sizelong = sizeof(long);
int sizellint = sizeof(long long int);
int sizefloat = sizeof(float);
int sizechar = sizeof(char);
/* int sizelong = sizeof(long); */
printf("Size of a char: %d byte(s)\n", sizechar);
printf("Size of an int: %d byte(s)\n", sizeint);
printf("Size of a long int: %d byte(s)\n", sizelong);
printf("Size of a long long int: %d byte(s)\n", sizellint);
printf("Size of a float: %d byte(s)\n", sizefloat);
return (0);
}
