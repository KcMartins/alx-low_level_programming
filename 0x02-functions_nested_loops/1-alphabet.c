#include "main.h"
/**
 * prints the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet(void)
{
	ch letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar("\n");
}
