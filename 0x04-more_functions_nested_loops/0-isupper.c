#include "main.h"
/**
  * _isupper - function prototype
  * @c: parameter
  * Description: uppercase character checker
  * Return: 0
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
