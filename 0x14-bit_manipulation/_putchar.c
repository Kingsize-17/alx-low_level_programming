#include "main.h"
#include <unistd.h>
/**
 * _putchar - is used to write the character c to stdout
 * @c: The character to be printed.
 *
 * Return: Return 1 On success.
 * On error, returned -1, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
