#pragma once
#include <string>

class Book {
  private:
    std::string author, title;

  public:
    Book();
    Book(const std::string& author, const std::string& title);
    Book(std::string&& author, std::string&& title);

    Book(const Book& other);
    Book(Book&& other);

    Book& operator=(const Book& other);
    Book& operator=(Book&& other);

    std::string GetAuthor() const { return author; };
    std::string GetTitle() const { return title; };
    void SetAuthor(const std::string& a) { author = a; };
    void SetTitle(const std::string& t) { title = t; };
    void SetAuthor(std::string&& a) { author = std::move(a); };
    void SetTitle(std::string&& t) { title = std::move(t); };

    friend std::ostream& operator<<(std::ostream& ostr, const Book& b);
};
