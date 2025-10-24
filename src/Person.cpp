#include "Person.h"
Person::Person(string firstName, string lastName, string newTelNr, string newAddress)
{
    this->setFirstName(firstName);
    this->setLastName(lastName);
    this->setTelNr(newTelNr);
    this->setAddress(newAddress);
}


Person::Person()
{
    this->setFirstName("Max");
    this->setLastName("Mustermann");
    this->setTelNr("01234567");
    this->setAddress("012345 Musterstadt");
}


string Person::getFirstName()
{
    return this->firstName;
}


void Person::setFirstName(string newName)
{
    if(newName != "")
    {
        this->firstName = newName;
    }
    else
    {
        cout <<  "First Name: " << newName <<  " has not been assigned to Person" << endl;
    }
}

string Person::getLastName()
{
    return this->lastName;
}

void Person::setLastName(string newName)
{
    if(newName != "")
    {
        this->lastName = newName;
    }
    else
    {
        cout <<  "Last Name: " << newName <<  " has not been assigned to Person" << endl;
    }
}