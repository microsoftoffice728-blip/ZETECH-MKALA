#include "Library.h"
#include "Book.h"
#include "User.h"
#include "test_utils.h"
#include <cassert>
#include <iostream>

void testAddBook() {
    Library library;
    Book book("1984", "George Orwell", "1234567890");
    library.addBook(book);
    assert(library.searchBookByTitle("1984").size() == 1);
}

void testRemoveBook() {
    Library library;
    Book book("1984", "George Orwell", "1234567890");
    library.addBook(book);
    library.removeBook("1234567890");
    assert(library.searchBookByTitle("1984").empty());
}

void testSearchBookByTitle() {
    Library library;
    Book book1("1984", "George Orwell", "1234567890");
    Book book2("Brave New World", "Aldous Huxley", "0987654321");
    library.addBook(book1);
    library.addBook(book2);
    assert(library.searchBookByTitle("1984").size() == 1);
    assert(library.searchBookByTitle("Brave New World").size() == 1);
}

void testSearchBookByAuthor() {
    Library library;
    Book book1("1984", "George Orwell", "1234567890");
    Book book2("Animal Farm", "George Orwell", "1122334455");
    library.addBook(book1);
    library.addBook(book2);
    assert(library.searchBookByAuthor("George Orwell").size() == 2);
}

void testBorrowBook() {
    Library library;
    User user("1", "Alice");
    Book book("1984", "George Orwell", "1234567890");
    library.addBook(book);
    library.borrowBook("1234567890", user);
    assert(user.getBorrowedBooks().size() == 1);
}

void testReturnBook() {
    Library library;
    User user("1", "Alice");
    Book book("1984", "George Orwell", "1234567890");
    library.addBook(book);
    library.borrowBook("1234567890", user);
    library.returnBook("1234567890", user);
    assert(user.getBorrowedBooks().empty());
}

int main() {
    testAddBook();
    testRemoveBook();
    testSearchBookByTitle();
    testSearchBookByAuthor();
    testBorrowBook();
    testReturnBook();
    std::cout << "All Library tests passed!" << std::endl;
    return 0;
}