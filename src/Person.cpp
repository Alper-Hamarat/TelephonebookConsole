#include "Person.h"

Person::Person(string firstName, string lastName, string newTelNr, string newAddress) : Entry::Entry(name, telNr, address)
{
    this->setAddress(newAddress);
}


Person::Person() : Entry::Entry()
{
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

void Person::printEntry()
{
    cout << "Entry information: " << endl;
    cout << "First Name: " << this->firstName << endl;
    cout << "Last Name: " << this->lastName << endl;
    cout << "TelNr: " << this->telNr << endl;
    cout << "Address: " << this->address << endl;
}