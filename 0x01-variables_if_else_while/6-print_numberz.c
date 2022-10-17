#include <stdio.h>
/**
  * main - Entry
  * Return: 0
  */
int main(void)
{
	int numbs;

	for (numbs = 0; numbs < 10; numbs++)
	{
		putchar((numbs % 10) + '0');
	}
	putchar('\n');
	return (0);
}
