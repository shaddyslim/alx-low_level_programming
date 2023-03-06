#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to the filled
 * @b: the desired value
 * @n: number of boys to change
 * Return: change array with new value for n bytes
 */
 char *_memset(char *s, char b, unsigned n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s)
}
