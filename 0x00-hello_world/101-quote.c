#include <stdio.h>
#include <unistd.h>
/**
 * main - prints out the last part of the error
 * this program prints main 
 * Return: 1 if successful 
 */
int (main)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str1, 59);
	return (1);
}
