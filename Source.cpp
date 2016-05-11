//skedge

#include <iostream>
#include "Events.h"
#include "DateTime.h"
#include "Schedule.h"
#include <vector>
#include <string>
#include <ctime>
using namespace std;


int main()
{
		Schedule testProgram();
		string user;
		string password;
		string eventname;
		string friendname;
		int eventmonth;
		int eventday;
		int eventhour;
		int eventminute;
	while (true)
	{

		cout << "Welcome to Skedge!" << endl;//start program
		do{
			cout << "To login press 1, for new user press 2.";//login start
			int control; //int value for user defined navigation
			cin >> control;
			cout << "Enter Username: ";//enter user and password
			cin >> user;
			cout << "Enter Password: ";
			cin >> password;
		}while (testProgram.isCorrectPassword(user,password) == false || control != 2);//require repeated login if incorrect

			if (control == 2)
			{
				testProgram.newUser(user, password);//create a new user
			}

			bool repeat;//variable to repeats schedule menu navigation
			do{//schedule menu
				cout << "This week you have " << testProgram.getNumEvents(user) << "events." << endl;
				cout << "Would you like to:" << endl << "1 create an event" << endl << "2 delete an event" << endl << "3 print your Skedge" << endl << "or 4 Logout? ";
				cin >> control;
				switch (control)
				{
				case 1://creates event
					cout << "What is the event?" << endl;
					cin >> eventname;
					cout << "What is the date of your event (Format: month day) ?" << endl;
					cin >> eventmonth >> eventday;
					cout << "What is the time of your event (Format: hour minute) ?" << endl;
					cin >> eventhour >> eventminute;
					cout << "Is this event with a freind? What is his/her name? (if no friends then just hit enter)";
					cin >> friendname;
					DateTime eventdate(eventmonth, eventday, eventhour, eventminute);//make new datetime variable for the event
					testProgram.create_event(eventdate, user, eventname, friendname);// make new event
					cout << eventname << " has been created";
					break;
				case 2://deletes event
					cout << "What is the title of the event you want to delete? ";
					cin >> eventname;
					testProgram.delete_event(eventname, user);
					cout << "Event deleted! " << endl;
					break;
				case 3://prints Skedge file
					testProgram.output_Calendar(user);
					break;
				case 4://logout
					cout << "Goodbye " << user;
					repeat == false;
					break;
				}
			} while (repeat == true)









	}
}