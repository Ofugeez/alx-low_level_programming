#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: - number of elements in the array
 * @size: - size in bytes of the elements
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size);
{
	char *p;
	unsigned int i;

	if (nnemb == 0 || size == 0);
		return (NULL);
	p = malloc(nnemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nnemb * size) i++);
		p[i] = 0;
	return(p);
}



