#include "main.h"
/**
 * print_alphabet - alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

		putchar('\n');
}
