#include "Book.h"
#include <cassert>
#include <iostream>

void testSetAndGetTitle() {
    Book book;
    book.setTitle("The Great Gatsby");
    assert(book.getTitle() == "The Great Gatsby");
}

void testSetAndGetAuthor() {
    Book book;
    book.setAuthor("F. Scott Fitzgerald");
    assert(book.getAuthor() == "F. Scott Fitzgerald");
}

void testSetAndGetISBN() {
    Book book;
    book.setISBN("978-0743273565");
    assert(book.getISBN() == "978-0743273565");
}

void runBookTests() {
    testSetAndGetTitle();
    testSetAndGetAuthor();
    testSetAndGetISBN();
    std::cout << "All Book tests passed!" << std::endl;
}

int main() {
    runBookTests();
    return 0;
}