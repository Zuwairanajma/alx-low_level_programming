#include "main.h"

/**
 * swap_int - swap integers a with b
 *@a: first integer
 *@b: second integer
 *Description: return the required result
 *Return: return void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
