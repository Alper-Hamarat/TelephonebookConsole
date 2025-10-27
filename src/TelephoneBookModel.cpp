#include "TelephoneBookModel.h"

#include <optional>



vector<Entry> TelephoneBookModel::getEntries()
{
    return listEntries;
}

optional<Entry> TelephoneBookModel::getEntry(string name)
{
    //Build iterator of type Vector Entry
    for (auto it = listEntries.begin(); it != listEntries.end(); it++)
    {
        if(it->getName() == name)
        {
            return *it;
        }
    }
    return nullopt;
}

bool TelephoneBookModel::addEntry(Entry & newEntry)
{
    //Check if entry already exists
    if(getEntry(newEntry.getName()) != nullopt)
    {
        return false;
    }
    else
    {
        listEntries.push_back(newEntry);
        return true;
    }
}

bool TelephoneBookModel::removeEntry(string name)
{
    //Build iterator of type Vector Entry

    for (auto it = listEntries.begin(); it != listEntries.end(); ++it)
    {
        if(it->getName() == name)
        {
            listEntries.erase(it);
            return true;
        }
    }
    return false;
}

bool TelephoneBookModel::editEntry(string name, Entry newEntry)
{
    //Build iterator of type Vector Entry
    for (auto it = listEntries.begin(); it != listEntries.end(); ++it)
    {
        if(it->getName() == name)
        {
            *it = newEntry;
            return true;
        }
    }
    return false;
}