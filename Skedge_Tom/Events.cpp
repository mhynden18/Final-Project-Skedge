#include "Event.h"

Events::Events()//there is no use for the no argument constructor that I can think of yet
{
	datetime = DateTime();
	description = "Blank Event";
}

Events::Events(DateTime eventTime, string description, vector<user> Users)//called by schedule.cpp to create a new event
{
	datetime = eventTime;
	this->description = description;

}

DateTime Events::get_datetime()//getters
{
	return datetime;
}

string Events::get_description()
{
	return description;
}

void Events::set_dateTime(DateTime eventTime)//setters
{
	datetime = eventTime;
}

void Events::set_description(string description)
{
	this->description = description;
}
