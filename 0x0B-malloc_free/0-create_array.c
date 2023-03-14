#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars
 *nitializes it with a specific char.
 *@size: size of the array
 *@c: the character to initialize the array
 * Return: a pointer to the array, NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);
	/*Allocating char c to all array slots*/
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
