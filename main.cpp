// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>	
#include <iomanip>
#include "Record.h"

using namespace std;

Record book[10];

void recInput() {

	for (int i = 0; i < 10; i++)
	{
		cout << "<><> Input Section <><>" << endl;
		cout << "-----------------------" << endl;
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

		// Prompt to continue or stop adding Records
		string answer = "";
		cout << "\n\nWould you like to add another record?" << endl;
		cout << "Type \"Yes\" to continue otherwise type any number to stop." << endl;
		cin >> answer;

		if (answer == "Yes")
		{
			continue;
		}
		else {
			break;
		}
	}	
}

void recDisplay() {
	cout << "\nDisplay Records" << endl;
	cout << "-------------------------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < 10; i++) {
		cout << setw(5) << "Record ID: " << setw(7) << book[i].getRecordID() << " | " << "First Name: " << setw(5) << book[i].getFirstName() << " | " << "Last Name: " << setw(10) << book[i].getLastName() << " | " << "Age: " << setw(10) << book[i].getAge() << " | " << "Telephone: " << setw(10) << book[i].getTelephone() << endl;
	}
	cout << "\n\n";
}

int main()
{
	int menuChoice;

	while (1)
	{
		cout << "Address Book Program" << endl;
		cout << "\n\nUse the menu numbers below:" << endl;
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
			cout << "Please select any of the three options.\n\n" << endl;
			break;
		}
	}
}
