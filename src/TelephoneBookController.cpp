#include "TelephoneBookController.h"

#include "UserIO.h"

// Definition der statischen Variable
//TelephoneBook TelephoneBookController::phoneBook;

TelephoneBookController::TelephoneBookController()
{
    
}

void TelephoneBookController::listEntries()
{
    vector<Entry> entries = this->phoneBook.getEntries();
    //Loop through all entries and call printEntry function
    vector<Entry>::iterator it;
    for (it = entries.begin(); it != entries.end(); ++it)
    {
        it->printEntry();
    }
}
void TelephoneBookController::listEntry()
{
    //Get name of entry
    cout << "Please enter Username" << endl;
    string username = getUserInput();
    //get Entry of NAme
    optional<Entry> entry = this->phoneBook.getEntry(username);
    if(entry != nullopt)
    {
        entry->printEntry();
    }
    else
    {
        cout << "No entry found" << endl;
    }
}
void TelephoneBookController::addEntry()
{
    cout << "Please enter a new Username" << endl;
    string username = getUserInput();
    //Check if existing Entry exists
    optional<Entry> entry = this->phoneBook.getEntry(username);
    if(entry != nullopt)
    {
        cout << "Entry already exists" << endl;
    }
    cout << "Please enter a new Telephone Number" << endl;
    string telNr = getUserInput();
    this->phoneBook.addEntry(username, telNr);
}
void TelephoneBookController::removeEntry()
{
    //Get name of entry
    cout << "Please enter Username" << endl;
    string username = getUserInput();
    //get Entry of NAme
    if(this->phoneBook.removeEntry(username))
    {
        cout << "User: " << username << "has been deleted successfully" << endl;
    }
    else
    {
        cout << "User: " << username << "has not been found" << endl;
    }
}