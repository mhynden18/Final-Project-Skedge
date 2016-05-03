#ifndef DATE
#define DATE
using namespace std;
#include <string>
class Date
{
private:
	int minute;
	int hour;
	int day;
	int month;
	int year;
public:
	Date();//only no argument constructor is needed because account should always refrence current time found from "ctime.h"
	int get_year();//getter functions to return object properties year month and day
	int get_month();
	int get_day();
	int get_hour();
	int get_minute();
	void set_current();
	void set_dattime(int minute, int hour, int day, int month, int year);
};

#endif