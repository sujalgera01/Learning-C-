#include <iostream>
#include <stdio.h>
#include <string>

using namespace std ;

class Person 
{
	int id ;
	int phoneNumber ;
	int gender;
	public :
	Person();
	void setDataUser(int id , int phoneNumber , int gender );
	void getDetails ();
};

Person :: Person ()
{
	this->id = 0 ;
	this->phoneNumber = 0 ;
	this->gender = 0 ;
}

void Person :: setDataUser (int id , int phoneNumber , int gender )
{
	this->id = id ;
	this->phoneNumber = phoneNumber ;
	this->gender = gender ;
}

void Person :: getDetails()
{
	cout << "The Id is " << this->id << "Phone Number is " << this->phoneNumber << "And Gender is " << this->gender ;
}