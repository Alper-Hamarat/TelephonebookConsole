#include "Office.h"
#include "Entry.h"

Office::Office(string name, string telNr, string address, string designation) : Entry(name, telNr, address)
{
    this->setDesignation(designation);
}

string Office::getDesignation()
{
    return this->designation;
}

void Office::setDesignation(string newDesignation)
{
    if(newDesignation != "")
    {
        this->designation = newDesignation;
    }
    else
    {
        cout <<  "Designation: " << newDesignation <<  " has not been assigned to Office" << endl;
    }
}

void Office::printEntry()
{
    Entry::printEntry();
    cout << "Designation: " << this->designation << endl;
}