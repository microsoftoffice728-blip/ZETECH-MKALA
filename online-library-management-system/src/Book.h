#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;

public:
    // Setters
    void setTitle(const std::string& title);
    void setAuthor(const std::string& author);
    void setISBN(const std::string& isbn);

    // Getters
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
};

#endif // BOOK_H