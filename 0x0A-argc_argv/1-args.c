#include "main.h"
#include <stdio.h>
/**
 * main - print the number of argument passed
 * @argc: count of agument
 * @argv: Arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
