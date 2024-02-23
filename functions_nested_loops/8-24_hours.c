#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Writes every minute of the day.
 *
 * Return: void.
 */
void jackbauer(void) 
{
	int hour;
	int minute;

	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}