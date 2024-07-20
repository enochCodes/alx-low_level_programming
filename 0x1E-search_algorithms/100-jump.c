#include "search_algos.h"
#include <math.h>

/**
 *
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t highIndex, lowIndex, jumpSize;

	if (array == NULL || size == 0)
		return (-1);

	lowIndex = 0;
	jumpSize = 3;
	highIndex = lowIndex + jumpsize;
}
