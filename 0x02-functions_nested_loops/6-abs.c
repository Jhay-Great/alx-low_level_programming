#include "main.h"
/**
  * _abs - function prototype
  * @x: parameter
  * Description: computing absolute value
  * Return: 0
  */
int _abs(int x)
{
	if (x >= 0)
	{
		x = x * 1;
		return (x);
	}
	else
	{
		x = x * -1;
		return (x);
	}
	return (0);
}
