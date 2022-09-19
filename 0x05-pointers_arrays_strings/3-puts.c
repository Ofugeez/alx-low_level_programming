#include <stdio.h>
#include "main.h"

/**
 * _puts - Write a function that prints a string,with a new line, to stdout.
 * @str: string to print
 *
 * on success: returns no error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
