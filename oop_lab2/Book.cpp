#include "Book.h"
#include "Book.h"
#include <iostream>

Book::Book() : author(""), title(""), publisher(""), year(0), pages(0) {}

Book::Book(const std::string& author, const std::string& title, const std::string& publisher, int year, int pages)
    : author(author), title(title), publisher(publisher), year(year), pages(pages) {}

Book::~Book() {}//У цьому випадку він порожній, оскільки немає динамічних ресурсів

std::string Book::getAuthor() const {
    return author;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getPublisher() const {
    return publisher;
}

int Book::getYear() const {
    return year;
}

int Book::getPages() const {
    return pages;
}

void Book::printInfo() const {
    std::cout << "Author: " << author << "\nTitle: " << title
        << "\nPublisher: " << publisher << "\nYear: " << year
        << "\nPages: " << pages << "\n";
}
