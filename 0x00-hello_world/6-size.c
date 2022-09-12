#include <stdio.h>

/**
* main - print the string in the put function
*
*Description: using the main function
* this program prins "programming is like building a multilingual puzzel
* Return: 0
*
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %ld byte(S)\n", sizeof(c));
	printf("size of a int: %ld byte(S)\n", sizeof(i));
	printf("Size of a long int: %ld byte(S)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(S)\n", sizeof(lli));
	printf("Size of a float: %ld byte(S)\n", sizeof(f));
	return (0);
}
