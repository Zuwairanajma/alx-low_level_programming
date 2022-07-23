#include "main.h"

/**
 * _strlen - returns the len of a string
 * @s: argument to the function
 * Description: return the required results
 * Return: return integer value
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count += 1;
		s++;
	}
	return (count);
}
