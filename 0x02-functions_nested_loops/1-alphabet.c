#include <stdio.h>
/**
 * main -  entry point
 *
 * Return: alphabet in lowercase, followed by a new line
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

		putchar('\n');
}
