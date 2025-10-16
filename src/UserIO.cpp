#include "UserIO.h"

using namespace std;

void printMenu()
{
    cout << "Willkommen im Telefonbuch" << endl;
    cout << "Geben sie auf der Tastatur ein und druecken sie Enter" << endl;
    cout << "1 fuer Telefonbucheinträge auflisten" << endl;
    cout << "2 fuer Telefonbucheintrag auslesen" <<endl;
    cout << "3 fuer Telefonbucheintrag hinzufuegen" << endl;
    cout << "4 fuer Telefonbucheintrag loeschen" << endl;
    cout << "9 fuer Programm beenden" << endl;
}

char getMenuInput()
{
    char userInput;
    cin >> userInput;
    return userInput;
}

string getUserInput()
{
    string userInput;
    cin >> userInput;
    return userInput;
}