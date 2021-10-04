/***********************************
 * People.h
 * Written by Prabhleen Pawar
 ***********************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <string> 
#include <cstdint>

#include "Person.h"

//People Class
class people
{
public: 
	//Constructor
	people();

	//Destructor
	~people();

    //Functions
    void insert(person x);       //Insert a user
    void display(ostream& out);  //Displays the information in order
    bool find(int ID);           //Finds a person with a given ID
    void remove(int ID);         //Removes a person with a given ID
private:
	person* Map;  //Pointer
	int len = 0;  //Len is the number of objects
};


