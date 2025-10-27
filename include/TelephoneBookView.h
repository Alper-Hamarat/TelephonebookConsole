#ifndef TELEPHONEBOOKVIEW_H
#define TELEPHONEBOOKVIEW_H

#include <string>
#include "ViewListener.h"

using namespace std;

class TelephoneBookView
{
    void showMenu(); 
    char showTelephoneBook(); 
    void setListener(ViewListener * listener);
};

#endif /* TELEPHONEBOOKVIEW_H */