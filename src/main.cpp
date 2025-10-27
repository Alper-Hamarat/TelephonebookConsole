#include "TelephoneBookController.h"
#include "UserIO.h"


int main()
{

    TelephoneBookView view;
    TelephoneBookModel model;

    TelephoneBookController controller(&view, &model);
    view.setListener(&controller);

    controller.run();
}