#include "Library.h"
#include "Book.h"
#include "User.h"
#include <vector>
#include <algorithm>

Library::Library() {}

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::removeBook(const std::string& isbn) {
    books.erase(std::remove_if(books.begin(), books.end(),
                                [&isbn](const Book& book) { return book.getISBN() == isbn; }),
                 books.end());
}

std::vector<Book> Library::searchBookByTitle(const std::string& title) {
    std::vector<Book> foundBooks;
    for (const auto& book : books) {
        if (book.getTitle() == title) {
            foundBooks.push_back(book);
        }
    }
    return foundBooks;
}

std::vector<Book> Library::searchBookByAuthor(const std::string& author) {
    std::vector<Book> foundBooks;
    for (const auto& book : books) {
        if (book.getAuthor() == author) {
            foundBooks.push_back(book);
        }
    }
    return foundBooks;
}

bool Library::borrowBook(const std::string& isbn, User& user) {
    auto it = std::find_if(books.begin(), books.end(),
                           [&isbn](const Book& book) { return book.getISBN() == isbn; });
    if (it != books.end() && !it->isBorrowed()) {
        it->setBorrowed(true);
        user.borrowBook(*it);
        return true;
    }
    return false;
}

bool Library::returnBook(const std::string& isbn, User& user) {
    auto it = std::find_if(books.begin(), books.end(),
                           [&isbn](const Book& book) { return book.getISBN() == isbn; });
    if (it != books.end() && it->isBorrowed()) {
        it->setBorrowed(false);
        user.returnBook(isbn);
        return true;
    }
    return false;
}