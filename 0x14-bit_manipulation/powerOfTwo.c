include "main.h"
int powerOfTwo(int n) {
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return 2 * powerOfTwo(n - 1);
	}
}
