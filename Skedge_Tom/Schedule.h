#ifndef _SCHEDULE_H_ //inclusion guard
#define _SCHEDULE_H_
#include <string>
#include <vector>
using namespace std;

class Schedule {
private:
	vector<event> Events; //vector for events
	vector <user> Users; //vector for users
public:
	event Events[]; //no argument constructor
	void create_event(vector<eventTime> DateTime, vector<person> Users); //creates an event
	event get_event(); //getter function for event
	Users get_user(); //getter function for user
	void output_Calendar(vector<person> Users); //outputs calendar in new file
};
#endif 