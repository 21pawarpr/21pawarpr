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
	//Test pointer before using it
	 if (Map != NULL) delete[] Map;
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

/**************************************
 * Insert
 **************************************/
 void people::insert(person x)
 {
	 //Variable
	 int i;
	 int j;
	 
	 //Check if pointer has enough space
	 if (len >= 20)
	 {
		 //Output to User
		 cout << "There isn't enough space for the object inserted." << endl;
		 return;
	 }

	 //Inserts new object in proper place 
	 for (i = 0; i < len; i++ )
	 {
		 //Compares if inserted object is less than
		 if (Map[i] < x)
		 {
			 //Making opening for inserted object
			 for (j = len; j > i; j--)
			 {
				 // Move objects in Map[] to the right
				 Map[j] = Map[j - 1];
			 }
			 //Get out of loop (Don't use break)
			 Map[i] = x;
			 len++;

			 return;
		 }
	 }

	 //Insertion
	 Map[i] = x;
	 //Updating len to have proper amount of objects
	 len++;
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
 bool people::find(int ID)
 {
	 //Variables
	 int i;
 
	 // For each person in map (linear search)
	 for (i = 0; i < len; i++) 
	 {
		if (Map[i].ID == ID) 
		{
			//Found
			return true;
		}
	 }
	 //Not Found
	 return false;

 }
/**************************************
 * Remove
 **************************************/
 void people::remove(int ID)
 {
	 //Variables
	 int i;

	 // For each person in map (linear search)
	 for (i = 0; i < len; i++) 
	 {
		if (Map[i].ID == ID) 
		{
			//Found ID
			for (i < len; ++i;)
			{
				Map[i] = Map[i + 1];
			}
			return;
		}
	 }

	 

 }
