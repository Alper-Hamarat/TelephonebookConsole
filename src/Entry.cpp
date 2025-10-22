#include "Entry.h"

Entry::Entry(string firstName, string lastName, string telNr) : firstName(firstName), lastName(lastName), telNr(telNr){}

Entry::Entry() : Entry("Max","Mustermann","012345678" ){};

string Entry::getFirstName()
{
    return this->firstName;
}

void Entry::setFirstName(string newName)
{
    if(newName != "")
    {
        this->firstName = newName;
    }
    else
    {
        cout <<  "First Name: " << newName <<  " has not been assigned to entry" << endl;
    }
}

string Entry::getLastName()
{
    return this->lastName;
}

void Entry::setLastName(string newName)
{
    if(newName != "")
    {
        this->lastName = newName;
    }
    else
    {
        cout <<  "Last Name: " << newName <<  " has not been assigned to entry" << endl;
    }
}

string Entry::getTelNr()
{
    return this->telNr;
}

void Entry::setTelNr(string newTelNr)
{
    if(newTelNr != "")
    {
        this->telNr = newTelNr;
    }
    else
    {
        cout <<  "TelNr: " << newTelNr <<  " has not been assigned to entry" << endl;
    }
}

void Entry::printEntry()
{
    cout << "Entry information: " << endl;
    cout << "Vorname: " << this->firstName << endl;
    cout << "Nachname: " << this->lastName << endl;
    cout << "TelNr: " << this->telNr << endl;
}