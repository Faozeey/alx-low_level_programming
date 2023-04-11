#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting memory address to be filled
 * @b: constant byte
 * @n: bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
