#pragma once


#include <string>

class Book {
private:
    std::string author;
    std::string title;
    std::string publisher;
    int year;
    int pages;

public:
    Book(); // Конструктор за замовчуванням
    Book(const std::string& author, const std::string& title, const std::string& publisher, int year, int pages);
    ~Book(); // Деструктор

    // Методи доступу
    std::string getAuthor() const;
    std::string getTitle() const;
    std::string getPublisher() const;
    int getYear() const;
    int getPages() const;

    // Виведення інформації про книгу
    void printInfo() const;
};