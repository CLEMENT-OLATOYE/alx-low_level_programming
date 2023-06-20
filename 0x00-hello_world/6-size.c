#include <stdio.h>

/**
 * main - Entry point of a program that prints various sizes of computer types
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %zu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of int: %zu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %zu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of float: %zu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}

