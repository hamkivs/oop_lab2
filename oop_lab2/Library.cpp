#include "Library.h"
#include "Library.h"
#include <iostream>

Library::Library() : bookCount(0) {}

Library::~Library() {}

void Library::addBook(const Book& book) {
    if (bookCount < MAX_BOOKS) {
        books[bookCount++] = book;
    }
    else {
        std::cout << "Library is full! Cannot add more books.\n";
    }
}

void Library::searchByAuthor(const std::string& author) const {
    for (int i = 0; i < bookCount; ++i) {
        if (books[i].getAuthor() == author) {
            books[i].printInfo();
            std::cout << "------\n";
        }
    }
}

void Library::searchByTitle(const std::string& title) const {
    for (int i = 0; i < bookCount; ++i) {
        if (books[i].getTitle() == title) {
            books[i].printInfo();
            std::cout << "------\n";
        }
    }
}

void Library::searchByPublisher(const std::string& publisher) const {
    for (int i = 0; i < bookCount; ++i) {
        if (books[i].getPublisher() == publisher) {
            books[i].printInfo();
            std::cout << "------\n";
        }
    }
}

void Library::searchByYear(int year) const {
    for (int i = 0; i < bookCount; ++i) {
        if (books[i].getYear() == year) {
            books[i].printInfo();
            std::cout << "------\n";
        }
    }
}

void Library::printAllBooks() const {
    for (int i = 0; i < bookCount; ++i) {
        books[i].printInfo();
        std::cout << "------\n";
    }
}

