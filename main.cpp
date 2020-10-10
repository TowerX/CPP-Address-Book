// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Record.h"

using namespace std;
string RECORDS[10];

void recInput() {

}

void recDisplay() {

}

void menu() {
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
			exit;
			break;

		default:
			cout << "Did you selected any options?" << endl;
			break;
		}
	}
}

int main()
{
	cout << "Hello World!\n";
	Record Book1;

	Book1.setRecordID("5");
	cout << Book1.getRecordID() << endl;
}
