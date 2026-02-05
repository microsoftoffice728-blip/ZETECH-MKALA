#include "User.h"
#include <iostream>
#include <vector>
#include "Book.h"

User::User(int id, const std::string& name) : userID(id), userName(name) {}

void User::setUserID(int id) {
    userID = id;
}

int User::getUserID() const {
    return userID;
}

void User::setUserName(const std::string& name) {
    userName = name;
}

std::string User::getUserName() const {
    return userName;
}

void User::borrowBook(Book& book) {
    borrowedBooks.push_back(book);
    std::cout << userName << " borrowed " << book.getTitle() << std::endl;
}

void User::returnBook(const Book& book) {
    auto it = std::remove_if(borrowedBooks.begin(), borrowedBooks.end(),
                               [&book](const Book& b) { return b.getISBN() == book.getISBN(); });
    if (it != borrowedBooks.end()) {
        borrowedBooks.erase(it, borrowedBooks.end());
        std::cout << userName << " returned " << book.getTitle() << std::endl;
    } else {
        std::cout << book.getTitle() << " was not borrowed by " << userName << std::endl;
    }
}

std::vector<Book> User::getBorrowedBooks() const {
    return borrowedBooks;
}