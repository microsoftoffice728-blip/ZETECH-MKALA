#include "Book.h"

Book::Book(const std::string& title, const std::string& author, const std::string& isbn)
    : title(title), author(author), isbn(isbn) {}

void Book::setTitle(const std::string& title) {
    this->title = title;
}

std::string Book::getTitle() const {
    return title;
}

void Book::setAuthor(const std::string& author) {
    this->author = author;
}

std::string Book::getAuthor() const {
    return author;
}

void Book::setISBN(const std::string& isbn) {
    this->isbn = isbn;
}

std::string Book::getISBN() const {
    return isbn;
}