#include "main.h"

/**
 * print_number - prints a number (0..81) aligned to 3 columns
 * @n: number to print
 *
 * Return: void
 */
static void print_number(int n)
{
	int d, u;

	d = n / 10;
	u = n % 10;

	_putchar(' ');
	if (d != 0)
		_putchar(d + '0');
	else
		_putchar(' ');
	_putchar(u + '0');
}

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			print_number(i * j);
		}
		_putchar('\n');
	}
}
