#include "main.h"

/**
 * jack_bauer - A function that prints every minute of the day'
 *
 * Return: A 24 hour clock
 */

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24) /* Loop through hours */
	{
		minute = 0; /* Reset minute to 0 for each new hour */
	while (minute < 60)
	{
		_putchar((hour / 10) + '0'); /* First digit - tens */
		_putchar((hour % 10) + '0'); /* Second digit - ones */

		_putchar(':'); /* Colon character */

		_putchar((minute / 10) + '0'); /* Fist digit - tens */
		_putchar((minute % 10) + '0'); /* Second digit - ones */

		_putchar('\n'); /* New line after each time */
		minute++; /* Increment the minute */
	}
	hour++; /* Increment the hour once the minute loop is done */
	}
}
