#include <ctype.h>
#include "main.h"
/**
 *_islower -> check if the character is lowercase
 *@c: a charcter argument
 *Return: return 1 and 0 depending on condition
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
