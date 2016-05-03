///////////////////////////
//Schedule part of Skedge
//////////////////////////

#include "Schedule.h"
#include <iostream>
#include <string>
event Schedule::Events[]
{
	//something = 0
}
void Schedule::create_event(vector<eventTime> DateTime, vector<person> Users)
{

}


event Schedule::get_event()
{
	return Event; //should it be return DateTime ???, or plural events
}

Users Schedule::get_user()
{
	return User; //or plural Users, or lowercase, or something else?
}

void Schedule::output_Calendar(vector<person> Users)
{
	//FileIO stuff
}
