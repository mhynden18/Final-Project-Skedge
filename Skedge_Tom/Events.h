#ifndef EVENT
#define EVENT

using namespace std;
#include <string>
#include <vector>
#include "DateTime.h"
#include "User.h"

class Events
{
private:
	DateTime datetime;
	string description;
	vector<user> Users;
public:
	Events();
	Events(DateTime eventTime, string description, vector<user> Users);
	DateTIme get_datetime();
	string get_description();
	void set_dateTime(DateTime eventTime);
	void set_description(string description);

};
