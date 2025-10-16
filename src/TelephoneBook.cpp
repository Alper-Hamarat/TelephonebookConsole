#include "TelephoneBook.h"

#include <optional>



vector<Entry> TelephoneBook::getEntries()
{
    return listEntries;
}

optional<Entry> TelephoneBook::getEntry(string name)
{
    //Build iterator of type Vector Entry
    vector<Entry>::iterator it;

    for (it = listEntries.begin(); it != listEntries.end(); ++it)
    {
        if(it->getName() == name)
        {
            return *it;
        }
    }
    return nullopt;
}

bool TelephoneBook::addEntry(string name, string telNr)
{
    //Check if entry already exists
    if(getEntry(name) != nullopt)
    {
        return false;
    }
    else
    {
        Entry newEntry(name, telNr);
        listEntries.push_back(newEntry);
        return true;
    }
}

bool TelephoneBook::removeEntry(string name)
{
    //Build iterator of type Vector Entry
    vector<Entry>::iterator it;

    for (it = listEntries.begin(); it != listEntries.end(); ++it)
    {
        if(it->getName() == name)
        {
            listEntries.erase(it);
            return true;
        }
    }
    return false;
}

bool TelephoneBook::editEntry(string name, Entry newEntry)
{
    //Build iterator of type Vector Entry
    vector<Entry>::iterator it;

    for (it = listEntries.begin(); it != listEntries.end(); ++it)
    {
        if(it->getName() == name)
        {
            *it = newEntry;
            return true;
        }
    }
    return false;
}