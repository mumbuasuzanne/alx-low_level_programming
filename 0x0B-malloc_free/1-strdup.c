#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * _strdup - returns a pointer to a newly allocated space in memory
 *   *          containing a copy of the string given as parameter.
 *    * @str: string to be copied
 *     *
 *      * Return: pointer to the duplicated string, or NULL if insufficient memory
 *       *         or if str is NULL.
 *        */
char *_strdup(char *str)
{
		char *dup;
			int i;
				int len = 0;

					if (str == NULL)
								return (NULL);

						while (str[len] != '\0')
									len++;

							dup = malloc(sizeof(char) * (len + 1));
								if (dup == NULL)
											return (NULL);

									for (i = 0; i < len; i++)
												dup[i] = str[i];

										dup[i] = '\0';
											return (dup);
}