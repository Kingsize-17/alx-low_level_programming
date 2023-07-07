#include "main.h"

/**
 * get_endianness - This checks if a machine is little or big endian
 * Return: Return 0 for big, Return 1 for little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
