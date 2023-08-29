#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search for
 *
 * Return: pointer to first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
