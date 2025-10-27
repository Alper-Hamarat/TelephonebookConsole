#include "TelephoneBookController.h"

#include "UserIO.h"

TelephoneBookController::TelephoneBookController(TelephoneBookView * view , TelephoneBookModel * model)
{
    this->view = view;
    this->model = model;
}

string TelephoneBookController::getUserInput(string textToDisplay)
{
    cout << textToDisplay << endl;
    string toReturn = "";
    cin >> toReturn;
    return toReturn;
}

char TelephoneBookController::getMenuInput(string textToDisplay)
{
    cout << textToDisplay << endl;
    char toReturn = ' ';
    cin >> toReturn;
    return toReturn;
}

void TelephoneBookController::run()
{
    char menuInput = '0';
    while(menuInput != '9')
    {
        //Show menu from view
        this->view->showMenu();
        //Get Input from user which actions to perform
        menuInput = this->getMenuInput("Which action would you like to perform?");
        //Switch based on user input
        /*
        void TelephoneBookView::showMenu()
        {
            cout << "Welcome to the Telephone Book: " << endl;
            cout << "To navigate press the Key on the Keyboard and press Enter." << endl;
            cout << "1: Show Telephone book" << endl;
            cout << "2: Get an entry from the Telephone book" << endl;
            cout << "3: Add an entry in the Telephone book" << endl;
            cout << "4: Remove an entry in the Telephone book" << endl;
            cout << "5: Edit an entry in the Telephone book" << endl;
            cout << "9: Exit the Program" << endl;
        } */

        switch (menuInput)
        {
        case '1':
        {
            vector<Entry> entries = this->model->getEntries();
            /* Print the Telephone Book */
            for(auto i = entries.begin(); i < entries.end(); i++)
            {
                i->printEntry();
            }
            break;
        }
        case '2':
        {
            string nameToGet = this->getUserInput("Please enter the name of the user");
            this->model->getEntry(nameToGet);
            break;
        }
        case '3':
        {
            string nameToAdd = this->getUserInput("Please enter the name of the user to add");
            string telNrToAdd = this->getUserInput("Please enter the Telephone number of the user to add");
            string addressToAdd = this->getUserInput("Please enter the Address of the user to add");

            Entry newEntry(nameToAdd, telNrToAdd, addressToAdd);

            this->model->addEntry(newEntry);
            break;
        }
        case '4':
        {
            string nameToRemoved = this->getUserInput("Please enter the name of the user to remove");
            this->model->removeEntry(nameToRemoved);
            break;
        }
        default:
            break;
        }
    }
}