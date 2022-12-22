#include "main.h"

/**
 * _strncat - joins two strings with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	char src;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j  < n && src[j] != '\0')
	{
		dest[i] = scr[j];
		i++;
		j++;
	}
	dest[1] = '\0';
	return (dest);
}
