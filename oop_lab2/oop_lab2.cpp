#include "Library.h"
#include <iostream>

int main() {
    Library library;

    library.addBook(Book("George Orwell", "1984", "Secker & Warburg", 1949, 328));
    library.addBook(Book("J.K. Rowling", "Harry Potter", "Bloomsbury", 1997, 223));
    library.addBook(Book("George Orwell", "Animal Farm", "Secker & Warburg", 1945, 112));

    Book book1("George Orwell", "1984", "Secker & Warburg", 1949, 328);
    library.addBook(book1);

    std::cout << "All books in the library:\n";
    library.printAllBooks();

    std::cout << "\nSearch by author (George Orwell):\n";
    library.searchByAuthor("George Orwell");

    std::cout << "\nSearch by title (1984):\n";
    library.searchByTitle("1984");

    std::cout << "\nSearch by publisher (Bloomsbury):\n";
    library.searchByPublisher("Bloomsbury");

    std::cout << "\nSearch by year (1945):\n";
    library.searchByYear(1945);

    return 0;
}

Student* students;//масив студентів