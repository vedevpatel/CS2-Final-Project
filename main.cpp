#include "User.h"
#include "MediaItem.h"
#include "Book.h"
#include "Movie.h"
#include "Library.h"

#include <iostream>
#include <string>
using namespace std;





int main() {
    Library library;
    MediaItem item;
    User user;


    string name;
    cout << "Welcome to the library. Please enter your first name to quick start: ";
    getline(cin, name);
    user.setName(name);

    int option = 0;
    cout << "\nWelcome, " << name << ".";
    

    do {
        library.displayMenu();
        cout << "Please select an option from the menu: ";
        cin >> option;
        system("cls");

        switch (option) {
        case 1:
            library.displayAllItems();
            break;

        case 2:
            int addItem;
            library.displayAllItems();
            cout << "Which item would you like to add? ";
            cin >> addItem;

            user.addBorrowedItem(&(library.getAllItems().at(addItem-1)));
            cout << "Item successfully added." << endl;
            break;

        case 3:
            int removeItem;
            
            user.displayBorrowedItems(user);

            if (!user.hasBorrowedItems()) {
                cout << "No borrowed items." << endl;
            }
            else {
                user.displayBorrowedItems(user);
                cout << "Which item would you like to remove? ";
                cin >> removeItem;

                user.removeBorrowedItem(removeItem - 1);
                cout << "Item successfully removed." << endl;

            }
            break;

        case 4:
            if (!user.hasBorrowedItems()) {
                cout << "No borrowed items." << endl;
            }
            else {
                user.displayBorrowedItems(user);
            }
            break;
        };

    } while (option != 9);


    return 0;
}
