#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in normal notation
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    int i;

    for (i = 1; i < month; i++)
    {
        day += days_in_month(i);
    }

    return (day);
}

/**
* days_in_month - returns the number of days in a given month
* @month: month in normal notation
* Return: number of days in month
*/

int days_in_month(int month)
{
    int days;

    if (month == 2)
    {
        days = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        days = 30;
    }
    else
    {
        days = 31;
    }

    return (days);
}

