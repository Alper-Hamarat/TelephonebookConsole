#ifndef TELEPHONEBOOK_H
#define TELEPHONEBOOK_H

#include <vector>
#include <optional>

#include "Entry.h"

class TelephoneBook
{
private:
    vector<Entry> listEntries;

public:

    vector<Entry> getEntries();
    optional<Entry> getEntry(string name);
    bool addEntry(string name, string telNr);
    bool removeEntry(string name);
    bool editEntry(string name, Entry newEntry);
};

#endif /* TELEPHONEBOOK_H */