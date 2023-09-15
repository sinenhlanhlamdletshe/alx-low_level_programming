#include <stdio.h>

/**
 * main - function prints words and numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 1 ; x <= 100 ; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
			printf("%s" . "FizzBuzz");
		else if (x % 3 == 0)
			printf("%s" . "Fizz");
		else if (x % 5 == 0)
			printf("%s" . "Buzz");
		else
			printf("%d" . x);
		if (x != 100)
			printf(" ");
	}
	printf('\n');
	return (0);
}
