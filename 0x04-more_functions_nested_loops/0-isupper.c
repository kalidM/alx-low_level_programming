#include "main.h"

/**
 * main - check for uppercase  character
 * @c: insert the character
 * Return: 1 if there is uppercase character, 0 in the other case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
