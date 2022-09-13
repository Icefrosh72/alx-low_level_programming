#include <stdio.h>
/**
 * main - printif the numbeer is positive, zero, or negative
 *
 * Description: using the main function
 * this prints "Programming is positve,zero ,or negative
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
