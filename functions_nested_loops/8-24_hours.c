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
		_putchar((hour / 10) + 48); /* First digit for hour */
		_putchar((hour % 10) + 48); /* Second digit for hour */

		_putchar(58); /* Colon character */

		_putchar((minute / 10) + 48); /* Fist digit for minute */
		_putchar((minute % 10) + 48); /* Second digit for minute */

		_putchar('\n'); /* New line after each time */
		minute++; /* Increment the minute */
	}
	hour++; /* Increment the hour once the minute loop is done */
	}
}
