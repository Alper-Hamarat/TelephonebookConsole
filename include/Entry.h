#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>

using namespace std;

class Entry
{
private:
    string firstName;
    string lastName;
    string telNr;
public:
    Entry(string firstName, string lastName, string newTelNr);
    Entry();
    
    string getFirstName();
    void setFirstName(string newName);

    string getLastName();
    void setLastName(string newName);

    string getTelNr();
    void setTelNr(string newTelNr);

    virtual void printEntry();
};

#endif /* ENTRY_H */