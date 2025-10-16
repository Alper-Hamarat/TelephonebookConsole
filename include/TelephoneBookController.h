#ifndef TELEPHONEBOOKCONTROLLER_H
#define TELEPHONEBOOKCONTROLLER_H

#include <iostream>
#include "TelephoneBook.h"


using namespace std;

class TelephoneBookController
{
private:
    TelephoneBook phoneBook;

public:
    TelephoneBookController();
    void listEntries();
    void listEntry();
    void addEntry();  
    void removeEntry();

};

#endif /* TELEPHONEBOOKCONTROLLER_H */