#pragma once

#include "MediaItem.h"
#include "Book.h"
#include "Movie.h"
#include <vector>

class Library {
private:
    string bookData;
    string movieData;
    vector<Book> books;
    vector<Movie> movies;
    vector<MediaItem> allItems; // List of all available media items
    

public:
    Library();
    void addItem(MediaItem item); // Add media items to the library
    void displayAllItems() const;  // Display all available media items
    // Getter
     vector<MediaItem>& getAllItems();

     void displayMenu();

};
