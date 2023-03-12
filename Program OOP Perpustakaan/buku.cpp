#include <iostream>
#include <string>
#include <vector>

using namespace std;

// class Book untuk merepresentasikan buku
class Book {
private:
    string title_;
    string author_;
    int year_;
public:
    Book(string title, string author, int year) : title_(title), author_(author), year_(year) {}

    // getter method
    string getTitle() { return title_; }
    string getAuthor() { return author_; }
    int getYear() { return year_; }

    // setter method
    void setTitle(string title) { title_ = title; }
    void setAuthor(string author) { author_ = author; }
    void setYear(int year) { year_ = year; }
};