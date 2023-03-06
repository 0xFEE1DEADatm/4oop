#pragma once
#include"Triad.h"

class Date : public Triad
{
public:
    Date() :Triad() {}
    Date(int day, int month, int year) :Triad(day, month, year) { /*std::cout << day; */}

    bool leap(int year);
    
    void add_day1();
    void add_month1();
    void add_year1();
    void add_day();
    
    Date& add_day(int d);
    std::string To_string();
};
