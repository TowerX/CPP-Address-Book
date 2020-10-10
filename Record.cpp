/* 
Author: Jay Torres
Date: October 10, 2020
FileName: Record.cpp
Purpose: Record Class Implementation File 
*/

#include "Record.h"
#include <string>

void Record::setRecordID(string idIn)
{
	recordID = idIn;
}

void Record::setFirstName(string fNameIn)
{
	firstName = fNameIn;
}

void Record::setLastName(string lNameIn)
{
	lastName = lNameIn;
}

void Record::setAge(string ageIn)
{
	age = ageIn;
}

void Record::setTelephone(string telIn)
{
	telephone = telIn;
}

string Record::getRecordID()
{
	return recordID;
}

string Record::getFirstName()
{
	return firstName;
}

string Record::getLastName()
{
	return lastName;
}

string Record::getAge()
{
	return age;
}

string Record::getTelephone()
{
	return telephone;
}
