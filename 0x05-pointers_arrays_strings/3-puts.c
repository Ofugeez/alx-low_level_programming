#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a sting followed by a new line to stdout
 * @str: the string to print
 *
 * Description: function that prints a string
 * on success: retun no error
 */

void _puts(char *s)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10)
}
