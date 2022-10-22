#include "main.h"
/**
  * more_numbers - function prototype
  * description: printing numbers 0 to 14 ten times
  * main - entry point
  * @void: parameter
  * Return: 0
  */
void more_numbers(void)
{
	int x, y, z, s;

	for (x = 0; x < 15; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar(y + '0');
		}
		for (z = 0; z < 5; z++)
		{
			for (s = 1; s < 2; s++)
			{
				_putchar(s + '0');
			}
			_putchar(z + '0');
		}
		_putchar('\n');
	}
}
