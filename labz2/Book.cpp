#include "Book.h"
#include <iostream>
#include <ostream>
#include <string>
#include <utility>

Book::Book() : author(""), title("") {
    std::cout << "Book()" << std::endl;
};

Book::Book(const std::string& author, const std::string& title) : author(author), title(title) {
    std::cout << "Book(const string&, const string&)" << std::endl;
};

Book::Book(std::string&& author, std::string&& title)
    : author(std::move(author)), title(std::move(title)) {
    std::cout << "Book(string&&, string&&)" << std::endl;
};

Book::Book(const Book& other) : author(other.author), title(other.title) {
    std::cout << "Book(const Book&)" << std::endl;
};

Book::Book(Book&& other) : author(std::move(other.author)), title(std::move(other.title)) {
    std::cout << "Book(Book&&)" << std::endl;
};

Book& Book::operator=(const Book& other) {
    std::cout << "operator=(const Book&)" << std::endl;
    if (this != &other) {
        author = other.author;
        title = other.title;
    }
    return *this;
}

Book& Book::operator=(Book&& other) {
    std::cout << "operator=(Book&&)" << std::endl;
    if (this != &other) {
        author = std::move(other.author);
        title = std::move(other.title);
    }
    return *this;
}

std::ostream& operator<<(std::ostream& ostr, const Book& b) {
    ostr << "Book{author: \"" << b.author << "\", title: \"" << b.title << "\"}";
    return ostr;
}
