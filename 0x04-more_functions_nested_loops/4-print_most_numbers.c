#include "main.h"
/**
  * print_most_numbers - function prototype
  * Description: outputing numbers from 0 to 9 except 2 and 4
  * @void: parameter
  * Return: 0
  */
void print_most_numbers(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
			_putchar(x + '0');
	}
	_putchar('\n');
}
