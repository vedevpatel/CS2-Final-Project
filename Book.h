#pragma once
#include "MediaItem.h"
#include <iostream>
using namespace std;

class Book : public MediaItem {
private:
	string author, isbn;

public:
	// Constructor declaration with default arguments
	Book(const string& title, const string& author, const string& isbn);

	string getIsbn() const {
		return isbn;
	}

	void displayInfo() const override;
	
};