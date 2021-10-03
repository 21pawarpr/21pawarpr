/***********************************
 * People.h
 * Written by Prabhleen Pawar
 ***********************************/

 //Person class
class person
{
public:

private: 
	int ID = 0;

	bool operator ==(const person& other);
};


//People Class

class people
{
public: 
	//Constructor
	people();

	//Destructor
	~people();

private:
	person* Map;
	int len = 0; 
};
