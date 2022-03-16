#include "main.h"
#include <stdio.h>
/**
 * times_table - function
 * @a, m, p: parameter
 * Retrun: end program
 */
void times_table(void)
{
	int a, m, p;
	int c = 1;

	if (n >= 0 && n <= 15)
	{
		for  (m = 0; m <= n; m++)
		{
			for (a = 0; a <= n; a++)
			{
				p = m * a;
				if (c == 0 && p < 10)
				{
					printf(",  %d", p);
				}
				else if (c == 0 && p < 100)
				{
					printf(",  %d", p);
				}
				else if (c == 0 && p < 1000)
				{
					printf(", %d", p);
				}
				else if (c == 0 && p >= 1000)
				{
					printf(", %d", p);
				}
				else
				{
				printf("%d", p);
				}
				c = 0;
			}
			putchar(10);
			c = 1;
		}
	}
	else
	{
	}
}
