#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generate valid
 * password for the program 101-crackme
 * Return: always 0 (success)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; 1 < 100; i++)
	{
		pass[i] = rand() % 70;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum + = 0;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
