#include <iostream>

using namespace std;

class Entry
{
    string name;
    string telNr;

    string getName();
    void setName(string newName);

    string getTelNr();
    void setTelNr(string newTelNr);

    void printEntry();
};