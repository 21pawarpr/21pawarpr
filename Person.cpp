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
//Update
void person::put(ostream& outFile)
{
	cout << left << setw(30) << this->ID;
	cout << left << setw(30) << this->lastName;
	cout << left << setw(30) << this->firstName;
	cout << left << setw(30) << this->age;

	cout << "\n";
}
