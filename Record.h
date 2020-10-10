/*  Record Class Declaration File
	Record.h
*/
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std; // Bad practice

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
