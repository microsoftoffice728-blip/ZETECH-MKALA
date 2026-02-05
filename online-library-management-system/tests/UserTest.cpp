#include "User.h"
#include "test_utils.h"
#include <cassert>
#include <iostream>

void testSetUserID() {
    User user;
    user.setUserID(1);
    assert(user.getUserID() == 1);
}

void testSetUserName() {
    User user;
    user.setUserName("Alice");
    assert(user.getUserName() == "Alice");
}

void testBorrowBook() {
    User user;
    user.setUserID(1);
    user.setUserName("Alice");
    user.borrowBook("Book Title 1");
    assert(user.getBorrowedBooks().size() == 1);
    assert(user.getBorrowedBooks()[0] == "Book Title 1");
}

void testReturnBook() {
    User user;
    user.setUserID(1);
    user.setUserName("Alice");
    user.borrowBook("Book Title 1");
    user.returnBook("Book Title 1");
    assert(user.getBorrowedBooks().empty());
}

void runUserTests() {
    testSetUserID();
    testSetUserName();
    testBorrowBook();
    testReturnBook();
    std::cout << "All User tests passed!" << std::endl;
}

int main() {
    runUserTests();
    return 0;
}