#include "Entry.h"

Entry::Entry(string vorname, string nachname, string telNr) : vorname(vorname), nachname(nachname), telNr(telNr){}

Entry::Entry() : Entry("Max","Mustermann","012345678" ){};

string Entry::getVorname()
{
    return this->vorname;
}

void Entry::setVorname(string newName)
{
    if(newName != "")
    {
        this->vorname = newName;
    }
    else
    {
        cout <<  "Name: " << newName <<  " has not been assigned to entry" << endl;
    }
}

string Entry::getNachname()
{
    return this->nachname;
}

void Entry::setNachname(string newName)
{
    if(newName != "")
    {
        this->nachname = newName;
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
    cout << "Vorname: " << this->vorname << endl;
    cout << "Nachname: " << this->nachname << endl;
    cout << "TelNr: " << this->telNr << endl;
}