#include "main.h"

/**
 * _isdigit - check if the numbers are between 0 - 9
 * @c: char for check
 * Return: 0 or 1 based on the condition
 */
int _isdigit(int c)
{
	if (c <= '0' && c >= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
