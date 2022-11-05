#include "main.h"
/**
  * swap_int - Function prototype
  * Return: void
  * @a: parameter
  * @b: parameter
  * Description: swaping two integers
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
