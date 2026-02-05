#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User {
private:
    std::string userID;
    std::string userName;
    std::vector<std::string> borrowedBooks;

public:
    // Constructor
    User(const std::string& id, const std::string& name);

    // Setters
    void setUserID(const std::string& id);
    void setUserName(const std::string& name);

    // Getters
    std::string getUserID() const;
    std::string getUserName() const;

    // Borrow and return books
    void borrowBook(const std::string& bookID);
    void returnBook(const std::string& bookID);
    std::vector<std::string> getBorrowedBooks() const;
};

#endif // USER_H