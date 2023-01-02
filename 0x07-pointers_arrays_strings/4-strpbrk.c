#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints the consecutive caracters of sl that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; (s + 1); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + 1) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + 1);
		}
	}
	return (0);
}
