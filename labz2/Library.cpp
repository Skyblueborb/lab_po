#include "Library.h"
#include "assert.h"

Library::Library() : array(nullptr), size(0) {}

Library::Library(std::size_t s) : size(s) {
    if (size > 0) {
        array = new Book[size];
    } else {
        array = nullptr;
    }
}

Library::Library(std::initializer_list<Book> list) : size(list.size()) {
    if (size > 0) {
        array = new Book[size];
        std::size_t i = 0;
        for (const auto& book : list) {
            array[i++] = book;
        }
    } else {
        array = nullptr;
    }
}

Library::Library(const Library& orig) : size(orig.size) {
    if (size > 0) {
        array = new Book[size];
        for (std::size_t i = 0; i < size; ++i) {
            array[i] = orig.array[i];
        }
    } else {
        array = nullptr;
    }
}

Library::Library(Library&& orig) : array(orig.array), size(orig.size) {
    orig.array = nullptr;
    orig.size = 0;
}

Library& Library::operator=(const Library& right) {
    if (this != &right) {
        delete[] array;
        size = right.size;

        if (size > 0) {
            array = new Book[size];
            for (std::size_t i = 0; i < size; ++i) {
                array[i] = right.array[i];
            }
        } else {
            array = nullptr;
        }
    }
    return *this;
}

Library& Library::operator=(Library&& right) {
    if (this != &right) {
        delete[] array;

        array = right.array;
        size = right.size;

        right.array = nullptr;
        right.size = 0;
    }
    return *this;
}

Book& Library::operator[](std::size_t index) {
    assert(index < size);
    return array[index];
}

const Book& Library::operator[](std::size_t index) const {
    assert(index < size);
    return array[index];
}

Library::~Library() {
    delete[] array;
}

std::ostream& operator<<(std::ostream& ostr, const Library& lib) {
    ostr << "Library[";
    for (std::size_t i = 0; i < lib.size; ++i) {
        ostr << lib.array[i];
        if (i < lib.size - 1) {
            ostr << ", ";
        }
    }
    ostr << "]";
    return ostr;
}
