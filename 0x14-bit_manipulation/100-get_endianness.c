#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: big endian/ little endian
 */

int get_endianness(void)
{
	int num = 1;
	char *ptrnumAddress = (char *)&num;

	if (*ptrnumAddress != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
