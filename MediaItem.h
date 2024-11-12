#pragma once
using namespace std;
#include <iostream>


class MediaItem {
protected:
	string title;
	string author;
	string isbn;
	int length = 0;
	int year = 0;

public:
	// Constructor
	MediaItem();
	MediaItem(const string& title, const string& author, const string& isbn, const int& length, const int& year);

	string getTitle();

	virtual void displayInfo() const;

};