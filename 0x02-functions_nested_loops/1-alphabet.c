#include "main.h"

/**
 * main - print_alphabet, prints the alphabet in lowercase
 */

void print_alphabet(void);
{
	int s;

	for (s = 'a' <= 'z'; s++)
	{
		_putchar(s);
	}

	_putchar('\n');
}
