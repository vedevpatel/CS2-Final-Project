#include "Book.h"
#include <iostream>
using namespace std;

// Constructor with parameters
Book::Book(const string& title, const string& author, const string& isbn)
	: MediaItem(title, author, isbn, length, year) {}

// Display Book-specific information
void Book::displayInfo() const {
	MediaItem::displayInfo();  // Display title from MediaItem
}


