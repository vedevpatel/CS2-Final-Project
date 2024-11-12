#include "MediaItem.h"
#include <iostream>
#include <vector>
using namespace std;

MediaItem::MediaItem() {
}

// Constructor with title
MediaItem::MediaItem(const string& title, const string& author, const string& isbn, const int& length, const int& year) 
	: title(title), author(author), isbn(isbn), length(length), year(year) {}



string MediaItem::getTitle() {
	return title;
}


// Display title (used by derived classes)
void MediaItem::displayInfo() const {
	cout << "\tTitle: " << title << endl;
	cout << "\tAuthor: " << author << endl;
	cout << "\tISBN: " << isbn << endl;
	cout << "\tRuntime: " << length << " minutes" << endl;
	cout << "\tYear: " << year << endl;
	cout << endl;
}



