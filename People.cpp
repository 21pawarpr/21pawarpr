/*********************************
 * People.cpp
 * Created by Prabhleen Pawar 
 *********************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "People.h" 

/**************************************
 * Constructor - no parameters
 **************************************/
people::people()
{
	//Creating Dynamic Array
	Map = new person[20];
}

/**************************************
 * Deconstructor
 **************************************/
 people::~people()
 {
	 delete[]Map;
 }

 /**********************************
 * Get Function
 **********************************/
 void person::get(ifstream& inputFile)
 {
	 //Variables
	 string tempFirst;
	 string tempLast;
	 int tempAge;
	 int tempID;

	 //Reading in the names, age and ID
	 inputFile >> tempFirst;
	 inputFile >> tempLast;
	 inputFile >> tempAge;
	 inputFile >> tempID;

	 //Intialize person object with new person information
	 this->firstName = tempFirst;
	 this->lastName = tempLast;
	 this->age = tempAge;
	 this->ID = tempID;
 }

 /**********************************
 * Put Function
 **********************************/
 void person::put()
 {
	 cout << left << setw(30) << this->ID;
	 cout << left << setw(30) << this->lastName;
	 cout << left << setw(30) << this->firstName;
	 cout << left << setw(30) << this->age;

	 cout << "\n";
 }

/**************************************
 * Insert
 **************************************/

/**************************************
 * Display
 **************************************/

/**************************************
 * Find 
 **************************************/

/**************************************
 * Remove
 **************************************/






