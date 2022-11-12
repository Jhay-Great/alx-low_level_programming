#include "main.h"
/**
  * _puts - function prototype
  * @str: parameter
  * description: printing strings
  * Return: *str.
  */
void _puts(char *str)
{
	int count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
