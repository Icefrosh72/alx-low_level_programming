#include <unistd.h>

/**
 * main - this write the character c to stdout
 *
 * Des - this print main
 * On error, -1 is returned, and error is set appropriately
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
