#include <iostream>
#include "Book.h"
#include "Library.h"

int main(void) {
    // {
    //     // BOOKS
    //     std::string a = "Frank Herbert", t = "Diuna";
    //     Book e;

    //     std::cout << "e: " << e << std::endl;

    //     Book b1 = {a, t};
    //     std::cout << "b1: " << b1 << std::endl;

    //     Book b2 = {"J.K. Rowling", "Harry Potter"};
    //     std::cout << "b2: " << b2 << std::endl;

    //     Book b3 = b1;
    //     std::cout << "b3: " << b3 << " b1: " << b1 << std::endl;

    //     e = std::move(b2);
    //     std::cout << "e: " << e << " b2: " << b2 << std::endl;
    // }
    {
        Book phys1("autor fiz 1", "tytul fiz 1");
        Book phys2("autor fiz 2", "tytul fiz 2");
        Book phys3("autor fiz 3", "tytul fiz 3");

        Book math1("autor mat 1", "tytul mat 1");
        Book math2("autor mat 2", "tytul mat 2");

        Section physicsSec({phys1, phys2, phys3}, "Physics");
        Section mathSec({math1, math2}, "Math");

        Library scientificLib({physicsSec, mathSec}, "Scientific Library");

        Section scifiSec({Book("Frank Herbert", "Dune"), Book("Isaac Asimov", "Foundation")},
                         "Sci-Fi");

        Section fantasySec({Book("J.R.R. Tolkien", "The Hobbit"),
                            Book("George R.R. Martin", "A Game of Thrones")},
                           "Fantasy");

        Library popScienceLib({scifiSec, fantasySec}, "Popular Science Library");


        Library popScienceLib2({
                {{{"autor sci 2", "tytul sci 2"}}, "Sci-fi"},
                {{{"autor fan 3", "tytul fan 3"}}, "Fantasy"},
                }, "Popular Science Library");


        std::cout << scientificLib << std::endl;
        std::cout << std::endl;
        std::cout << popScienceLib2 << std::endl;

        std::cout << std::endl;
        std::cout << popScienceLib[0] << std::endl;

        std::cout << std::endl;
        std::cout << popScienceLib[0][1] << std::endl;
        scientificLib[0][1] = std::move(popScienceLib[0][1]);
        std::cout << scientificLib[0][1] << std::endl;
        std::cout << popScienceLib[0][1] << std::endl;
    }
    return 0;
}
