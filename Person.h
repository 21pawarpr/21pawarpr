/***********************************
 * Person.h
 * Written by Prabhleen Pawar
 ***********************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <string> 
#include <cstdint>

//Person Class
class person
{
public:
    person();    // Null constructor

    //Get Function:
    bool get(istream& inputFile);

    //Put Function
    void put(ostream& outFile);

    //Operators
    bool operator ==(int& ID);
    bool operator <(const person& other);
    bool operator >(const person& other);

private:
    //Class Variables

    //First Name 
    std::string firstName;

    //Last Name
    std::string lastName;

    //Age
    int age;

    //ID
    int ID;

    //Allowing to access people private variable
    friend class people;
};
