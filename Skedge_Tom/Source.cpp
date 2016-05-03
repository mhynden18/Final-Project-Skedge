//skedge

#include <iostream>
#include "Events.h"
#include "DateTime.h"
#include "Schedule.h"
#include <vector>
#include <string>
using namespace std;


int main()
{
	Schedule testProgram();
	string user;
	string password;
	cout << "Welcome to Skedge!" << endl;
	cout << "To login press 1, for new user press 2.";
	int control; //int value for user defined navigation
	cin >> control;
	cout << "Enter Username: ";
	cin >> user;
	cout << "Enter Password: ";
	cin >> password;
	if (control = 1)
	{
		testProgram.login(user, password);
	}
	else
	{
		testProgram.newUser(user, password);
	}

}