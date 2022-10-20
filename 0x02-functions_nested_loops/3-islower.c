#include "main.h"
/**
  * _islower - function prototype
  * @c: parameter
  * Description: character checker
  * Return: Always 0
  */
int _islower(int c)
{

	if (c > 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

