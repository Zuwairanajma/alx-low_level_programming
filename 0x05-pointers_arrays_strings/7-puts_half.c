#include "main.h"

/**
 * puts_half - print out half of the  string
 * @str: pointer argument
 * Description: returns the required result
 * Return: returns void
 */

void puts_half(char *str)
{
	char *ptr = str;
	int count = 0;
	int j;

	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}

	for (j = 0; j <= (count - 1); j++)
	{
		if (j >= ((count) / 2) && j <= count && count % 2 == 0)
		{
			_putchar(str[j]);
		}
		else if (count % 2 != 0 && j > ((count - 1) / 2) && j <= count)
			_putchar(str[j]);
	}
	_putchar('\n');
}
