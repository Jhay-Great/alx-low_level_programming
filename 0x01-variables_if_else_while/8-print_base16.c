#include <stdio.h>
/**
  * main - Entry
  * Return: 0
  */
int main(void)
{
	int numbs;
	char y;

	for (numbs = 0; numbs < 10; numbs++)
	{
		putchar((numbs % 10) + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
