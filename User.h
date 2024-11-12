#pragma once
#include "Book.h"
#include "Movie.h"
#include <string>
#include <vector>
using namespace std;

class User {
private:
    string userId;
    string userName;
    vector<MediaItem*> borrowedItems;  // Can hold pointers to Books or Movies

public:
    User();
    User(const string name);

    // Getters
    string getName() const;
    void setName(string n);

    void addBorrowedItem(MediaItem* item);
    void removeBorrowedItem(int title);
    void displayBorrowedItems(User user) const;

    bool hasBorrowedItems() const;
};

