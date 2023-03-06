#include"Triad.h"

Triad::Triad()
{
	day = month = year =0;
}
Triad::Triad(int x, int y, int z)
{
	day = x;
	month = y;
	year = z;
}

void Triad::add_day1()
{
	day++;
}
void Triad::add_month1()
{
	month++;
}
void Triad::add_year1()
{
	year++;
}
