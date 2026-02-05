#include <iostream>
#include "Library.h"
#include "User.h"

int main() {
    Library library;
    User user;

    int choice;
    do {
        std::cout << "Welcome to the Online Library Management System\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. Remove Book\n";
        std::cout << "3. Search Book by Title\n";
        std::cout << "4. Search Book by Author\n";
        std::cout << "5. Borrow Book\n";
        std::cout << "6. Return Book\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string title, author, isbn;
                std::cout << "Enter book title: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                std::cout << "Enter book author: ";
                std::getline(std::cin, author);
                std::cout << "Enter book ISBN: ";
                std::getline(std::cin, isbn);
                library.addBook(Book(title, author, isbn));
                break;
            }
            case 2: {
                std::string isbn;
                std::cout << "Enter book ISBN to remove: ";
                std::cin.ignore();
                std::getline(std::cin, isbn);
                library.removeBook(isbn);
                break;
            }
            case 3: {
                std::string title;
                std::cout << "Enter book title to search: ";
                std::cin.ignore();
                std::getline(std::cin, title);
                library.searchBookByTitle(title);
                break;
            }
            case 4: {
                std::string author;
                std::cout << "Enter book author to search: ";
                std::cin.ignore();
                std::getline(std::cin, author);
                library.searchBookByAuthor(author);
                break;
            }
            case 5: {
                std::string isbn;
                std::cout << "Enter book ISBN to borrow: ";
                std::cin.ignore();
                std::getline(std::cin, isbn);
                library.borrowBook(user, isbn);
                break;
            }
            case 6: {
                std::string isbn;
                std::cout << "Enter book ISBN to return: ";
                std::cin.ignore();
                std::getline(std::cin, isbn);
                library.returnBook(user, isbn);
                break;
            }
            case 7:
                std::cout << "Exiting the system. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}