#include "main.h"

/**
 * _isupper - checks if a character is supercase or not 
 * @c: character to be tested
 * Return: 1 if 'c' is supercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);		
	}
	return (0);
}
