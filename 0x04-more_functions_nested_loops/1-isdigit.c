#include "main.h"
/**
  * _isupper - function prototype
  * @c: parameter
  * Description: digit checker
  * Return: 0
  */
int _isdigit(int c)
{
	if (c > -1 && c < 10)
		return (1);
	else
		return (0);
}
