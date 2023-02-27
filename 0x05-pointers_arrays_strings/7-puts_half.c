#include "main.h"

/**
 * puts_halh - prints half of a starting
 * @str: input
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}
