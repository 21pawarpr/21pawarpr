/***********************************
 * People.h
 * Written by Prabhleen Pawar
 ***********************************/

//People Class
class people
{
public: 
	//Constructor
	people();

	//Destructor
	~people();

    //Functions
    void insert(person p);       //Insert a user
    void display(ostream& out);  //Displays the information in order
    bool find(int ID);           //Finds a person with a given ID
    void remove(int ID);         //Removes a person with a given ID
private:
	person* Map;  //Pointer
	int len = 0;  //Len is the number of objects
};

//Person Class
class person
{
public:
    person();    // Null constructor

    //Get Function:
    void get(istream& inputFile);

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
