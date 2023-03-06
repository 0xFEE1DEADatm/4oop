#include"Date.h"
#include<iostream>

bool Date::leap(int year)
{
    return (year % 4 == 0);
}

void Date::add_day1()
{
    int d = 1;
    if (day + d > maxday)
    {
        d -= maxday - day;
        if (++month > 12)
        {
            month = 1;
            year++;
        }
        while (d / maxday) {
            if (++month > 12) {
                month = 1;
                year++;
            }
            d -= maxday;
        }
        day = d;
    }
    else day += d;
   
}
void Date::add_month1()
{
    if (month + 1 > 12)
    {
        year++;
        month = 1;
    }
    else month ++;
}
void Date::add_year1()
{
    year++;
}

Date& Date::add_day(int d)
{
    if (day + d > maxday)
    {
        d -= maxday - day;
        if (++month > 12)
        {
            month = 1;
            year++;
        }
        while (d / maxday) {
            if (++month > 12) {
                month = 1;
                year++;
            }
            d -= maxday;
        }
        day = d;
    }
    else day += d;
    return *this;
}

std::string Date::To_string()
{
    return  (std::to_string(day) + '.' + std::to_string(month) + '.' + std::to_string(year));
}
