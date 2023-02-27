#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


#define SUM 2772
/**
 * main - Create a program that generates random valid
 * passwords for the program 101-crackme
 *
 *
 * man srand, rand, time
 * Return: 0
 */

int main(void)
{
	srand((unsigned int)(time(NULL)));
	int sum = 0, n = 0, i = 0;
	char str[100];

	int index = 0;
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
	for(index = 0; index < 12; index++)
	srand(time(NULL));
	while (sum < SUM)
	{
		printf("%c", characters[rand() % (sizeof characters - 1)]);
		if (SUM - sum < 48)
			sum -= str[--i];
		else if (SUM - sum <= 126)
			n = SUM - sum;
		else
			n = rand() % (126 - 48) + 48;
		if (n)
		{
			str[i++] = n;
			sum += n;
		}
		n = 0;
	}
	str[i] = '\0';
	printf("%s", str);
	return (0);
}
