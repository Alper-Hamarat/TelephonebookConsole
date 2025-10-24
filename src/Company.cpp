#include "Company.h"
#include "Entry.h"

Company::Company(string name, string telNr, string address, string contactPerson) : Entry::Entry(name, telNr, address)
{
    this->setContactPerson(contactPerson);
}
Company::Company()
{
    Entry::Entry();
}
string Company::getContactPerson()
{
    return this->contactPerson;
}
void Company::setContactPerson(string newContactPerson)
{
    if(newContactPerson != "")
    {
        this->contactPerson = newContactPerson;
    }
    else
    {
        cout <<  "Contact Person: " << newContactPerson <<  " has not been assigned to Person" << endl;
    }
}

void Company::printEntry()
{
    Entry::printEntry();
    cout << "Contact Person: " << this->contactPerson << endl;
}