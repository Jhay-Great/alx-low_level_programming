#include <stdio.h>
/**
  * main - Entry point
  * Description: base 10 numbers from 0-9 no char type
  * Return: Always 0
  */
int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
		putchar("%d", nums);
	putchar("\n");
	return (0);
}
