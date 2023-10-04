#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int x, z, r, length, k, car;

	x = 0;
	z = 0;
	r = 0;
	length = 0;
	k = 0;
	car = 0;

	while (s[length] != '\0')
		length++;

	while (x < length && k == 0)
	{
		if (s[x] == '-')
			++z;

		if (s[x] >= '0' && s[x] <= '9')
		{
			car = s[x] - '0';
			if (z % 2)
				car = -car;
			r = r * 10 + car;
			k = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			k = 0;
		}
		x++;
	}

	if (k == 0)
		return (0);

	return (r);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int meli, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	meli = num1 * num2;

	printf("%d\n", meli);

	return (0);
}
