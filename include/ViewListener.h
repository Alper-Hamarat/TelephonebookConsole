#ifndef VIEWLISTENER_H
#define VIEWLISTENER_H

#include <string>

using namespace std;

class ViewListener
{
    virtual string getUserInput() = 0; 
    virtual char getMenuInput() = 0; 
};

#endif /* VIEWLISTENER_H */