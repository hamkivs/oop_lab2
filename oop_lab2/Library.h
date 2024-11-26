#pragma once
#include "Book.h"

const int MAX_BOOKS = 100;

class Library {
private:
    Book books[MAX_BOOKS]; // Масив книг, що зберігає об'єкти класу Book.
    int bookCount;// Лічильник кількості книг у бібліотеці.

public:
    Library();
    ~Library();

    void addBook(const Book& book);
    void searchByAuthor(const std::string& author) const;
    void searchByTitle(const std::string& title) const;
    void searchByPublisher(const std::string& publisher) const;
    void searchByYear(int year) const;
    void printAllBooks() const;
};
