#include "Movie.h"
#include <iostream>
using namespace std;


// Constructor with parameters
Movie::Movie(const string& title, int length, int year)
	: MediaItem(title, author, isbn, length, year) {}

// Display Movie-specific information
void Movie::displayInfo() const {
	MediaItem::displayInfo();
}
