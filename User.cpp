#include "User.h"
#include "Library.h"
#include "MediaItem.h"
#include <iostream>
using namespace std;

// Constructor
User::User() : userId(""), userName("") {} // Default constructor

User::User(const string name) : userName(name) {}


// Getters
string User::getName() const {
	return userName;
}


void User::setName(string n) {
    userName = n;
}

// Member functions
void User::addBorrowedItem(MediaItem* item) {
	borrowedItems.push_back(item);
}

void User::removeBorrowedItem(int num) {
    if (num >= 0 && num < borrowedItems.size()) {
        borrowedItems.erase(borrowedItems.begin() + num);
        cout << "Item removed successfully.\n";
    }
    else {
        cout << "No matching title found." << endl;
    }
}


void User::displayBorrowedItems(User user) const {
    string name = user.getName();
    int lastLetter = name.size() - 1;

    if (name.at(lastLetter) == 's') {
        cout << user.getName() << "' Borrowed Items: " << endl;
    }
    else {
        cout << user.getName() << "'s borrowed items: " << endl;
    }


    if (borrowedItems.empty()) {
        return;
    }

    int serialNumber = 1;
	for (const auto* i : borrowedItems) {
        cout << serialNumber++ << ". ";
        i->displayInfo();
        cout << endl;
	}

}


bool User::hasBorrowedItems() const {
    return !borrowedItems.empty();
}
