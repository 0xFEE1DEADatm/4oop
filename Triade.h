#pragma once
#include<string>
#include<iostream>

class Triad
{
public:
	int day, year, month, maxday = 31;
	bool leapyear;

	Triad();
	Triad(int x, int y, int z);
	
	//Triad data(const Triad& tr);

	void add_day1();
	void add_month1();
	void add_year1();

};
