#include "main.h"
/**
 * _strchr - entry point
 * @s: input
 * @c: input
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int c = 0;

	for (; s[c] >= '\0'; c++)
	{
		if (s[i] == c)
			return (&s[c]);
	}
	return (0);
}
