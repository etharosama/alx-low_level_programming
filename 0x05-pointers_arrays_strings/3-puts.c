#include "main.h"
/**
 * _strlen - return the length of a string
 * Owned By Bwave
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

