#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>

using namespace std;

class Entry
{
private:
    string vorname;
    string nachname;
    string telNr;
public:
    Entry(string vorname, string nachname, string newTelNr);
    Entry();
    
    string getVorname();
    void setVorname(string newName);

    string getNachname();
    void setNachname(string newName);

    string getTelNr();
    void setTelNr(string newTelNr);

    virtual void printEntry();
};

#endif /* ENTRY_H */