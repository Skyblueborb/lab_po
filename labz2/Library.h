#pragma once
#include "Book.h"
#include <cstddef>
#include <initializer_list>
#include <iostream>

class Library {
    private:
        Book* array;
        std::size_t size;
    public:
        Library();
        Library(std::size_t s);
        Library(std::initializer_list<Book> list);
        Library(const Library& orig);
        Library(Library&& orig);
        Library& operator=(const Library& right);
        Library& operator=(Library&& right);
        Book& operator[](std::size_t index);
        const Book& operator[](std::size_t index) const;
        std::size_t GetSize() const { return size; };
        ~Library();
        friend std::ostream& operator<<(std::ostream& ostr, const Library& lib);
};
