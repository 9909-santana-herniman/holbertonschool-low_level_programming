#include <main.h>
/*
 * main - print _putchar as an output
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	char output[] = "_putchar";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar('\n');
	return (0);
}
