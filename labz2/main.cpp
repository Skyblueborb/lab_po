#include <iostream>
#include "Book.h"
#include "Library.h"

int main(void) {
    {
        // BOOKS
        std::string a = "Frank Herbert", t = "Diuna";
        Book e;

        std::cout << "e: " << e << std::endl;

        Book b1 = {a, t};
        std::cout << "b1: " << b1 << std::endl;

        Book b2 = {"J.K. Rowling", "Harry Potter"};
        std::cout << "b2: " << b2 << std::endl;

        Book b3 = b1;
        std::cout << "b3: " << b3 << " b1: " << b1 << std::endl;

        e = std::move(b2);
        std::cout << "e: " << e << " b2: " << b2 << std::endl;
    }
    {
        Library e;
        std::cout << "e: " << e << std::endl;

        Library l1 = {{"J.R.R. Tolkien", "Wladca Pierscieni"},
                      {"Stanislaw Lem", "Solaris"},
                      {"Andrzej Sapkowski", "Wiedzmin"}};
        std::cout << "l1: " << l1 << std::endl;

        Library l2(2);
        std::cout << "l2: " << l2 << std::endl;

        l2[0] = {"George Orwell", "1984"};
        l2[1] = {"Frank Herbert", "Diuna"};
        std::cout << "l2: " << l2 << std::endl;

        e = std::move(l2);
        std::cout << "e: " << e << " l2: " << l2 << std::endl;

        l1[0] = std::move(e[1]);
        std::cout << "l1: " << l1 << " e: " << e << std::endl;
    }
}
