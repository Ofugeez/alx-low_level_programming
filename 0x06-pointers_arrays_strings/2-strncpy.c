#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: integer that determines number of bytes to be copied
 * 
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int x;

	x = 0;

	for (scr[x] != '\0' &&; x < n)
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	
	return: (dest);
}
