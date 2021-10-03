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
 * People Constructor - no parameters
 **************************************/
people::people()
{
	//Creating Dynamic Array
	Map = new person[20];
}

/**************************************
 * People Deconstructor
 **************************************/
 people::~people()
 {
	 delete[]Map;
 }

 /**********************************
 * Person Null constructor
 **********************************/
 person::person()
 {
 }


 /**********************************
 * Get Function
 **********************************/
 void person::get(istream& inputFile)
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

/**************************************
 * Insert
 **************************************/
 void people::insert(person p)
 {
	 //Variable
	 int i;

	 //Loop
	 for (i = 0; i++; )
	 {
		 if ()
		 {
			 for ()
			 {

			 }
		 }
	 }
 }
/**************************************
 * Display
 **************************************/
 void people::display(ostream& out)
 {
	 //Variable
	 int i;
	 //Intialize to zero
	 int totalAge = 0;
	 int avgAge = 0;

	 //Basic Menu Display to User
	 cout << left << setw(10) << "ID";
	 cout << left << setw(10) << "Last";
	 cout << left << setw(10) << "First";
	 cout << left << setw(10) << "Age" << endl;
	 //Dashes
	 cout << setw(10) << "----";
	 cout << setw(10) << "--------------";
	 cout << setw(10) << "--------";
	 cout << setw(10) << "---";
	 cout << endl;

	 //Calculate Average Age
	 avgAge = totalAge / len; 

	 //Calculation Display

 }
/**************************************
 * Find 
 **************************************/
 bool find(int ID)
 {

 }
/**************************************
 * Remove
 **************************************/
 void remove(int ID)
 {

 }






