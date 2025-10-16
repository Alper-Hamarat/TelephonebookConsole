#include "Entry.h"

Entry::Entry(string newName, string newTelNr) : name(newName), telNr(newTelNr){}

Entry::Entry() : Entry("Kein Name","012345678" ){};

string Entry::getName()
{
    return this->name;
}

void Entry::setName(string newName)
{
    if(newName != "")
    {
        this->name = newName;
    }
    else
    {
        cout <<  "Name: " << newName <<  " has not been assigned to entry" << endl;
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
    cout << "Name: " << this->name << endl;
    cout << "TelNr: " << this->telNr << endl;
}