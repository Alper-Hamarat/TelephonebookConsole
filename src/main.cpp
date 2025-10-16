#include "TelephoneBookController.h"
#include "UserIO.h"


int main()
{
    char userInput = '0';
    TelephoneBookController bookController;

    //Führe Programm solange aus bis Nutzer 9 eingibt
    while (userInput != '9')
    {
        //Menü ausgeben
        printMenu();

        //Nutzer eingabe verwalten
        userInput = getMenuInput();

        switch (userInput)
        {
        case '1':
        {
            bookController.listEntries();
            break;
        }
        case '2':
        {
            bookController.listEntry();
            break;
        }
        //Add Entry
        case '3':
        {
            bookController.addEntry();
            break;
        }
        
        case '4':
        {
            bookController.removeEntry();
            break;
        }
        default:
            break;
        }
    }
    
}