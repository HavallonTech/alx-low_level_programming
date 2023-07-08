#include "main.h"
/**
 * _pow_recursion - A function the retrns the value of x raise to power y
 * @y: power para,eter
 * @x: Denominator parameter
 * Return: Value of x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
