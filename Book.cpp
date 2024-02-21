#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Lecture 2/5/24

class Book {
    private:
        string name;
        int year;
    public:
        Book() {name = ""; year = 0;} // default constuctor
        Book(string n ) {name = n; year = 0;} // another constuctor
        Book(string n, int y) {name = n; year = y;}// third constructor
        void printBook() {cout << "Book Info: " <<name<< " "<<year<<"\n";}
};

int main() {
        vector<Book> library;
        library.push_back(Book());
        library.push_back(Book("The Great Gatsby"));
        library.push_back(Book("Pride and Prejudice", 1813));
        library.push_back(Book("Denton UNT", 1891));
        
        for(int i = 0; i < library.size(); i++) {


        }




}