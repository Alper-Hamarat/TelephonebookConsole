#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>

using namespace std;

class Entry
{
private:
    string name;
    string telNr;
public:
    Entry(string newName, string newTelNr);
    Entry();
    
    string getName();
    void setName(string newName);

    string getTelNr();
    void setTelNr(string newTelNr);

    void printEntry();
};

#endif /* ENTRY_H */