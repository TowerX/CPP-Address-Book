// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Record.h"

using namespace std;

Record book[10];

void recInput() {
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		cout << "<><> Input Section <><>" << endl;
		cout << "--------------------------------" << endl;
		cout << "\n\nRecord Number: ";
		string r = "";
		cin >> r;
		book[i].setRecordID(r);

		cout << "First Name: ";
		string f = "";
		cin >> f;
		book[i].setFirstName(f);

		cout << "Last Name: ";
		string l = "";
		cin >> l;
		book[i].setLastName(l);

		cout << "Age: ";
		string a = "";
		cin >> a;
		book[i].setAge(a); 

		cout << "Telephone: ";
		string t = "";
		cin >> t;
		book[i].setTelephone(t);
	}	
}

void recDisplay() {

}

int main()
{
	/* Testing the constructor override.
	Record Book1("ADB");
	cout << Book1.getRecordID() << endl; 
	*/
	int menuChoice;

	while (1)
	{
		cout << "Address Book Program" << endl;
		cout << "\n\nPress the number to action" << endl;
		cout << "\n\n1 - Input Record" << endl;
		cout << "2 - Display Records" << endl;
		cout << "3 - Exit" << endl;

		// Prompt the user for the menu choice
		cin >> menuChoice;
		cout << "\n\n" << endl;

		switch (menuChoice)
		{
		case 1:
			cin.ignore(); // Clears the input
			recInput();
			break;

		case 2:
			recDisplay();
			break;

		case 3:
			// Exit the program by returning false on the while loop
			cout << "\n\nClosing Program..." << endl;
			return 0;
			break;

		default:
			cout << "Did you selected any options?" << endl;
			break;
		}
	}
}
