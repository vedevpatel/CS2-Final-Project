#include "Library.h"
#include "Movie.h"
#include <iostream>
#include <string>
using namespace std;


Library::Library() {
    string bookData[10][3] = {
        {"Book: C++ Programming", "Bjarne Stroustrup", "123456789"},
        {"Book: The Art of Computer Programming", "Donald Knuth", "234567890"},
        {"Book: Elementary Linear Algebra", "Howard Anton", "978111843"},
        {"Book: To Kill a Mockingbird", "Harper Lee", "9780061120084"},
        {"Book: 1984", "George Orwell", "9780451524935"},
        {"Book: The Great Gatsby", "F. Scott Fitzgerald", "9780743273565"},
        {"Book: Moby-Dick", "Herman Melville", "9781503280786"},
        {"Book: Pride and Prejudice", "Jane Austen", "9781503290563"},
        {"Book: The Catcher in the Rye", "J.D. Salinger", "9780316769488"},
        {"Book: Brave New World", "Aldous Huxley", "9780060850524"}
    };

    // Adding books to the Library
    for (int i = 0; i < 10; i++) {
        books.push_back(Book(bookData[i][0], bookData[i][1], bookData[i][2]));

        allItems.push_back(books.back());
    }

    // Storing year and length as string to account for string array
    string movieData[10][3] = {
        {"Movie: The Shawshank Redemption", "142", "1994"},
        {"Movie: The Godfather", "175", "1972"},
        {"Movie: The Dark Knight", "152", "2008"},
        {"Movie: Schindler's List", "195", "1993"},
        {"Movie: Pulp Fiction", "154", "1994"},
        {"Movie: The Lord of the Rings: The Return of the King", "201", "2003"},
        {"Movie: Forrest Gump", "142", "1994"},
        {"Movie: Inception", "148", "2010"},
        {"Movie: Fight Club", "139", "1999"},
        {"Movie: The Matrix", "136", "1999"}
    };

    // Adding movies to the library (converting length and year to ints)
    for (int i = 0; i < 10; i++) {
        int length = stoi(movieData[i][1]);
        int year = stoi(movieData[i][2]);
        movies.push_back(Movie(movieData[i][0], length, year));

        allItems.push_back(movies.back());
    }    
    
}


 vector<MediaItem>& Library::getAllItems() {
    return allItems;
}


void Library::addItem(MediaItem item) {
    allItems.push_back(item);
}

void Library::displayAllItems() const {
    cout << "All available media items:" << endl;
    int serialNumber = 1;
    
    
    for (size_t i = 0; i < allItems.size(); i++) {
        cout << "  " << serialNumber++ << ". ";
        allItems.at(i).displayInfo();
    }
    

    cout << "----------------------------" << endl;
}


void Library::displayMenu() {
    cout << "\n1. Display all available items\n";
    cout << "2. Add an item\n";
    cout << "3. Remove an item\n";
    cout << "4. Show borrowed items.\n";
    cout << "9. Exit.\n";
}