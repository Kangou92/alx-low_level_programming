#include"main.h"
#include<stdio.h>
/**
 * print_remaining_days  - converts a given date
 * into day of the year and print the remaining days
 * @month:month of the date
 * @day:day of the date
 * @year:year  of the date
 * Return:void
*/

void print_remaining_days(int month, int day, int year)
{
	day = convert_day(month, day);
	while ((month >= 1 && month <= 12) && (day >= 1 && day <= 31))
	{
		if ((year % 100 == 0 && year % 4 != 0) || (year % 4 == 0))
		{
			if (month >= 2 && day >= 60)
			{
			day++;
			}
		}
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		else
		{
			if (month == 2 && day == 60)
			{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
			}
			else
			{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
			}
		}
	}
}
