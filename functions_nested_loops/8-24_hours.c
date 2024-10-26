#include "main.h"
/**
 * jack_bauer - Print every minute of the day
 *
 * Rreturn: no value
 */
void jack_bauer(void)
{
int a = 0, b = 0, c = 0, d = 0;
while (a <= 2)
{
while (b <= 9)
{
while (c <= 5)
{
while (d <= 9)
{
if (a == 2 && b >= 4)
{
break;
}
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
d++;
}
d = 0;
c++;
}
c = 0;
b++;
}
b = 0;
a++;
}
}
