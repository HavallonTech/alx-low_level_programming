#include "search_algos.h"
/**
 * binary_search - searching for a value using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value we search for
 *
 * Return: the index of the matched value or -1 if no match
 */

int binary_search(int *array, size_t size, int value)
{
	size_t k, mid_term, left, right;

	left = array[0];
	right = array[size - 1];
	mid_term = find_mid(left, right);
	printf("value of right[%ld]\n", right);
	printf("value of left[%ld] \n", left);
	printf("Searching in array: ");
	while (left < right)
	{
		for (k = left; k < right + 1; k++){
			printf("%d, ",array[k]);
		}
		printf("\n");
		if(value == array[mid_term])
			return (array[mid_term]);

		else if (value > array[mid_term]){
			left = array[mid_term + 1];
			mid_term = find_mid(left, right);
		}
		else if (value < array[mid_term]){
			right = mid_term - 1;
			mid_term = find_mid(left, right);
		}
	}
	return (-1);
}



/**
* binary_search - searching for a value using the Linear search algorithm
* @array: pointer to the first element of the array
* @size: the number of elements in the array
* @value: the value we search for
*
* Return: the mid index of the array
*/

int find_mid(size_t left, size_t right)
{
	return (right + left) / 2;
}
