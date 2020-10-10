/*  Record Class Declaration File
	Record.h
*/
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#pragma once
#ifndef RECORD_H
#define RECORD_H
class Record
{
private:
	string recordID;
	string firstName;
	string lastName;
	string age;
	string telephone;
public:
	// Default constructor
	Record() {

	}

	// Overriding constructor
	Record(string idIn) :recordID(idIn) {

	}

	Record(string idIn, string fNameIn, string lNameIn, string ageIn, string telIn)
		:recordID(idIn), firstName(fNameIn), lastName(lNameIn), age(ageIn), telephone(telIn) {
		// Age validation
		if (age.length() == 2)
		{
			age = ageIn;
		}
		else {
			age = "xx";
		}
		// Telephone validation
		if (telephone.length() == 12) {

			telephone = telIn;
		}
		else {
			telephone = "Dinosaur";
		}
	}

	// Set
	void setRecordID(string idIn);
	void setFirstName(string fNameIn);
	void setLastName(string lNameIn);
	void setAge(string ageIn);
	void setTelephone(string telIn);

	// Get
	string getRecordID();
	string getFirstName();
	string getLastName();
	string getAge();
	string getTelephone();
};
#endif
