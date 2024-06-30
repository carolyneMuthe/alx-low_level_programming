#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int day_of_year;

       /*	Convert month and day to the day of the year*/
	day_of_year = convert_day(month, day);

       /*	Check for leap year */
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{

		/* Leap year conditions */
		if (month > 2)
		{
			day_of_year++;
		}
		if (day_of_year > 366)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else
		{
			printf("Day of the year: %d\n", day_of_year);
			printf("Remaining days: %d\n", 366 - day_of_year);
		}
	}
	else
	{
		/* Non-leap year conditions */
		if (day_of_year > 365)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else
		{
			printf("Day of the year: %d\n", day_of_year);
			printf("Remaining days: %d\n", 365 - day_of_year);
		}
	}
}
