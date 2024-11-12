#pragma once
#include "MediaItem.h"
using namespace std;

class Movie : public MediaItem {
private:
	int year, length;
	string movieData;
public:
	Movie(const string& title, int length, int year);

	void displayInfo() const override;
};