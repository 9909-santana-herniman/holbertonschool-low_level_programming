#include <stdio.h>

/**
 * main - Fizz-Buzz test
 *
 * Description: A program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of 3 print Fizz,
 * and for multiples of 5 print Buzz. For numbers which are
 * multiples of both, print FizzBuzz.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int range = 1;
	char num3[] = "Fizz";
	char num5[] = "Buzz";

	while (range <= 100)
	{
		/* If multiple of 3 and 5, print FizzBuzz */
		if ((range % 3 == 0) && (range % 5 == 0))
		{
			printf("%s%s", num3, num5);
		}
		/* If multiple of 3 print Fizz */
		else if (range % 3 == 0)
		{
			printf("%s", num3);
		}
		/* If multiple of 5 print Buzz */
		else if (range % 5 == 0)
		{
			printf("%s", num5);
		}
		else /* If not multiple of 3 or 5, print number */
		{
			printf("%d", range);
		}
		if (range < 100) /* If not 100 print space */
		{
			putchar(' ');
		}
		range++;
	}
	putchar('\n');
	return (0);
}
