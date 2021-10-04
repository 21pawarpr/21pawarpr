/***********************************
 * Person Class Definitions
 * Written by Prabhleen Pawar
 ***********************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "Person.h"

/**********************************
* Person Null constructor
**********************************/
person::person()
{

}

/**********************************
* Get Function
**********************************/
bool person::get(istream& inputFile)
{
	if (!inputFile.eof())
	{
		//Variables
		int tempID;
		string tempFirst;
		string tempLast;
		int tempAge;


		//Reading in the names, age and ID
		inputFile >> tempID;
		inputFile >> tempFirst;
		inputFile >> tempLast;
		inputFile >> tempAge;



		//Intialize person object with new person information
		this->ID = tempID;
		this->firstName = tempFirst;
		this->lastName = tempLast;
		this->age = tempAge;

		return true;
	}
	else
	{
		return false;
	}
}

/**********************************
* Put Function
**********************************/
void person::put(ostream& outFile)
{
	cout << left << setw(30) << this->ID;
	cout << left << setw(30) << this->lastName;
	cout << left << setw(30) << this->firstName;
	cout << left << setw(30) << this->age;

	cout << "\n";
}

/**********************************
 * Equal()
 **********************************/
bool person::operator ==(int& ID)
{
	return this->ID == ID;
}

/**********************************
*lesser()
************************************/
bool person::operator <(const person& other)
{
	if (lastName != other.lastName)
	{
		return lastName > other.lastName;
	}
	else if (firstName != other.firstName)
	{
		return firstName > other.firstName;
	}
	else if (age != other.age)
	{
		return age > other.age;
	}

	return false;
}

/**********************************
*greater()
************************************/
bool person::operator >(const person& other)
{
	if (lastName != other.lastName)
	{
		return lastName < other.lastName;
	}
	else if (firstName != other.firstName)
	{
		return firstName < other.firstName;
	}
	else if (age != other.age)
	{
		return age < other.age;
	}

	return false;
}

