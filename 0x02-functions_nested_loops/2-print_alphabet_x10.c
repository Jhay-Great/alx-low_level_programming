#include "main.h"
/**
  * print_alphabet_x10 - function prototype
  * Description: printing alphabets 10 times
  * Return: 0
  */
void print_alphabet_x10(void)
{
	char x;
	char y;

	for (x = 0; x <= 9 ; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
