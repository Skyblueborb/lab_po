#include "Library.h"
#include <cassert>
#include <utility>

Section::Section() : array(nullptr), size(0), name("") {}

Section::Section(const std::string& n) : array(nullptr), size(0), name(n) {}

Section::Section(std::size_t s, const std::string& n) : size(s), name(n) {
    if (size > 0) {
        array = new Book[size];
    } else {
        array = nullptr;
    }
}

Section::Section(std::initializer_list<Book> list, const std::string& n)
    : size(list.size()), name(n) {
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

Section::Section(const Section& orig) : size(orig.size), name(orig.name) {
    if (size > 0) {
        array = new Book[size];
        for (std::size_t i = 0; i < size; ++i) {
            array[i] = orig.array[i];
        }
    } else {
        array = nullptr;
    }
}

Section::Section(Section&& orig) : array(orig.array), size(orig.size), name(std::move(orig.name)) {
    orig.array = nullptr;
    orig.size = 0;
}

Section& Section::operator=(const Section& right) {
    if (this != &right) {
        delete[] array;
        size = right.size;
        name = right.name;

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

Section& Section::operator=(Section&& right) {
    if (this != &right) {
        delete[] array;

        array = right.array;
        size = right.size;
        name = std::move(right.name);

        right.array = nullptr;
        right.size = 0;
    }
    return *this;
}

Book& Section::operator[](std::size_t index) {
    assert(index < size);
    return array[index];
}

const Book& Section::operator[](std::size_t index) const {
    assert(index < size);
    return array[index];
}

Section::~Section() {
    delete[] array;
}

std::ostream& operator<<(std::ostream& ostr, const Section& sec) {
    ostr << "Section ";
    if (!sec.name.empty()) {
        ostr << sec.name << " ";
    }
    ostr << "[";
    for (std::size_t i = 0; i < sec.size; ++i) {
        ostr << sec.array[i];
        if (i < sec.size - 1) {
            ostr << ", ";
        }
    }
    ostr << "]";
    return ostr;
}

Library::Library() : array(nullptr), size(0), name("") {}

Library::Library(const std::string& n) : array(nullptr), size(0), name(n) {}

Library::Library(std::size_t s, const std::string& n) : size(s), name(n) {
    if (size > 0) {
        array = new Section[size];
    } else {
        array = nullptr;
    }
}

Library::Library(std::initializer_list<Section> list, const std::string& n)
    : size(list.size()), name(n) {
    if (size > 0) {
        array = new Section[size];
        std::size_t i = 0;
        for (const auto& section : list) {
            array[i++] = section;
        }
    } else {
        array = nullptr;
    }
}

Library::Library(const Library& orig) : size(orig.size), name(orig.name) {
    if (size > 0) {
        array = new Section[size];
        for (std::size_t i = 0; i < size; ++i) {
            array[i] = orig.array[i];
        }
    } else {
        array = nullptr;
    }
}

Library::Library(Library&& orig) : array(orig.array), size(orig.size), name(std::move(orig.name)) {
    orig.array = nullptr;
    orig.size = 0;
}

Library& Library::operator=(const Library& right) {
    if (this != &right) {
        delete[] array;
        size = right.size;
        name = right.name;

        if (size > 0) {
            array = new Section[size];
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
        name = std::move(right.name);

        right.array = nullptr;
        right.size = 0;
    }
    return *this;
}

Section& Library::operator[](std::size_t index) {
    assert(index < size);
    return array[index];
}

const Section& Library::operator[](std::size_t index) const {
    assert(index < size);
    return array[index];
}

Library::~Library() {
    delete[] array;
}

std::ostream& operator<<(std::ostream& ostr, const Library& lib) {
    ostr << "Library ";
    if (!lib.name.empty()) {
        ostr << lib.name << " ";
    }
    ostr << "[";
    for (std::size_t i = 0; i < lib.size; ++i) {
        ostr << lib.array[i];
        if (i < lib.size - 1) {
            ostr << ", ";
        }
    }
    ostr << "]";
    return ostr;
}
