#include <stdio.h>
/**
 * print_letter - alphabet in lowercase, followed by a new line
 *
 * Return: Always 0
 */

void print_letter(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

		putchar('\n');
}
