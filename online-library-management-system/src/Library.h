#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>
#include "Book.h"
#include "User.h"

class Library {
public:
    void addBook(const Book& book);
    void removeBook(const std::string& isbn);
    std::vector<Book> searchBookByTitle(const std::string& title);
    std::vector<Book> searchBookByAuthor(const std::string& author);
    bool borrowBook(const std::string& isbn, const User& user);
    bool returnBook(const std::string& isbn, const User& user);

private:
    std::vector<Book> books;
    std::vector<User> users;
};

#endif // LIBRARY_H