#include "main.h"
/**
  * main - outputing numbers from 0 to 9
  * Return: 0
  */
void print_numbers(void)
{
	char x;

	for(x = 0; x < 10; x++)
		_putchar(x + '0');
	_putchar('\n');
}
