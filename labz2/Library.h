#pragma once
#include "Book.h"
#include <cstddef>
#include <initializer_list>
#include <iostream>
#include <string>


class Section {
    private:
        Book* array;
        std::size_t size;
        std::string name;
    public:
        Section();
        Section(const std::string& n);
        Section(std::size_t s, const std::string& n = "");
        Section(std::initializer_list<Book> list, const std::string& n = "");
        Section(const Section& orig);
        Section(Section&& orig);

        Section& operator=(const Section& right);
        Section& operator=(Section&& right);
        Book& operator[](std::size_t index);
        const Book& operator[](std::size_t index) const;

        std::size_t GetSize() const { return size; };
        std::string GetName() const { return name; };
        void SetName(const std::string& n) { name = n; };
        void SetName(std::string&& n) { name = std::move(n); };

        ~Section();
        friend std::ostream& operator<<(std::ostream& ostr, const Section& lib);
};

class Library {
    private:
        Section* array;
        std::size_t size;
        std::string name;
    public:
        Library();
        Library(const std::string& n);
        Library(std::size_t s, const std::string& n = "");
        Library(std::initializer_list<Section> list, const std::string& n = "");
        Library(const Library& orig);
        Library(Library&& orig);

        Library& operator=(const Library& right);
        Library& operator=(Library&& right);
        Section& operator[](std::size_t index);
        const Section& operator[](std::size_t index) const;

        std::size_t GetSize() const { return size; };
        std::string GetName() const { return name; };
        void SetName(const std::string& n) { name = n; };
        void SetName(std::string&& n) { name = std::move(n); };

        ~Library();
        friend std::ostream& operator<<(std::ostream& ostr, const Library& lib);
};
