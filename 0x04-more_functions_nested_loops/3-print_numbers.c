#include "main.h"
/**
  * print_numbers - function prototype
  * Description: outputing numbers from 0 to 9
  * @void: parameter
  * Return: 0
  */
void print_numbers(void)
{
	char x;

	for (x = 0; x < 10; x++)
		_putchar(x + '0');
	_putchar('\n');
}
