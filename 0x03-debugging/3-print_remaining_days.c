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
    int days_in_months[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int leap_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

    if (month < 1 || month > 12 || day < 1 || day > 31)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (leap_year && month > 2)
    {
        day++; /* Adjust for leap year after February */
    }

    if (day > (days_in_months[month] + (leap_year && month > 2 ? 1 : 0)))
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    printf("Day of the year: %d\n", day);
    printf("Remaining days: %d\n", leap_year ? 366 - day : 365 - day);
}   
