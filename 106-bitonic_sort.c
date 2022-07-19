#include "sort.h"
#include <stdio.h>

/**
 * printcheck - print a range
 * @array: The array to print
 * @r1: Less range
 * @r2: Final range
 * Return: Nothing
 */
void printcheck(int *array, int r1, int r2)
{
	int i;

	for (i = r1; i <= r2; i++)
	{
		if (i > r1)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
/**
 * _swap - swap two elements in an array
 * @array: THe array to change the values
 * @i: A index
 * @j: Another index
 * @dir: Direction of the array
 * Return: Nothing
 */
void _swap(int *array, int i, int j, int dir)
{
	int tmp;

	if (dir == (array[i] > array[j]))
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
}
/**
 * bitonic_merge - swap the elements to sort
 * @array: Array to sort
 * @low: The low element in the range to sort
 * @size: The size of the range to sort
 * @dir: Indicate which half are manage
 * @r_size: The size of the all array
 * Return: Nothing
 */
void bitonic_merge(int *array, int low, int size, int dir, const int r_size)
{
	int k = size, i = low;

	if (size > 1)
	{
		k = size / 2;


