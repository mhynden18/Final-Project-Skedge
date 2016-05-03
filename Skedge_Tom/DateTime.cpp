#include "Date.h"
#include "ctime"
using namespace std;
#include <iostream>
#include "DateTime.h"
Date::Date()//gets current month, day, year
{
	time_t now = time(0);//make variable now equal to current seconds since 1970
	tm *ltm = localtime(&now);//creates tm object found in the ctime library

	year = 1900 + ltm->tm_year;//sets year
	month = 1 + ltm->tm_mon;//sets month
	day = ltm->tm_mday;//sets day
	hour = ltm->tm_hour;
	minute = ltm->tm_min;
}
int Date::get_year() //getter functions to return year month day
{
	return year;
}

int Date::get_month()
{
	return month;
}

int Date::get_day()
{
	return day;
}

int Date::get_hour()
{
	return hour;
}

int Date::get_minute()
{
	return minute;
}

void Date::set_current()
{

	time_t now = time(0);//make variable now equal to current seconds since 1970
	tm *ltm = localtime(&now);//creates tm object found in the ctime library

	year = 1900 + ltm->tm_year;//sets year
	month = 1 + ltm->tm_mon;//sets month
	day = ltm->tm_mday;//sets day
	hour = ltm->tm_hour;
	minute = ltm->tm_min;
}

void Date::set_dattime(int minute, int hour, int day, int month, int year)
{
	this->minute = minute;
	this->hour = hour;
	this->day = day;
	this->month = month;
	this->year = year;
}
