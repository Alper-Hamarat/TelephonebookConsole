#include "TelephoneBookModel.h"

#include <optional>

vector<Entry *> TelephoneBookModel::getEntries()
{
    return listEntries;
}

Entry * TelephoneBookModel::getEntry(string name)
{
    //Build iterator of type Vector Entry
    for (auto entry : listEntries)
    {
        if(entry->getName() == name)
        {
            return entry;
        }
    }
    return NULL;
}

bool TelephoneBookModel::addEntry(Entry & newEntry)
{
    //Check if entry already exists
    if(getEntry(newEntry.getName()) != NULL)
    {
        return false;
    }
    else
    {
        listEntries.push_back(&newEntry);
        return true;
    }
}

bool TelephoneBookModel::removeEntry(string name)
{
    //Build iterator of type Vector Entry

    for (auto it = listEntries.begin(); it != listEntries.end(); ++it)
    {
        if((*it)->getName() == name)
        {
            delete *it;
            listEntries.erase(it);
            return true;
        }
    }
    return false;
}

bool TelephoneBookModel::editEntry(string name, Entry * newEntry)
{
    //Build iterator of type Vector Entry
    for (auto it = listEntries.begin(); it != listEntries.end(); ++it)
    {
        if((*it)->getName() == name)
        {
            delete *it;
            *it = newEntry;
            return true;
        }
    }
    return false;
}