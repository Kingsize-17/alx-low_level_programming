#include "main.h"

/**
 * get_bit - This returns the value of a bit at an index in a decimal number
 * @n: number to be searched
 * @index: index number of the bit
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_vel;

	if (index > 63)
		return (-1);

	bit_vel = (n >> index) & 1;

	return (bit_vel);
}
