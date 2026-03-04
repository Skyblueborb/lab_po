#include <iostream>
#include "FiguraPlaska.hpp"
#include "Kolo.hpp"
#include "Okrag.hpp"
#include "Prostokat.hpp"
#include "Trojkat.hpp"
#include "Kula.hpp"
#include "Szescian.hpp"

#define ENDL(x) \
    for (int i = 0; i < x; ++i) std::cout << std::endl;

int main(void) {
    {
        Prostokat prosty(1, 2);
        FiguraPlaska* p2 = new Prostokat(2, 5);

        std::cout << "Pole prostokata p2: " << p2->Pole() << std::endl;

        std::cout << prosty << std::endl;
        ENDL(2);
        std::cout << *p2 << std::endl;
        delete p2;
    }
    ENDL(4);
    {
        Trojkat troj(3, 4, 5);
        Trojkat* t2 = new Trojkat(6, 7, 9);

        std::cout << troj << std::endl;
        ENDL(2);
        std::cout << *t2 << std::endl;
        delete t2;
    }
    ENDL(4);
    {
        Kolo kol(3);

        std::cout << kol << std::endl;
    }
    ENDL(4);
    {
        Kolo over(3.14, true);

        std::cout << over << std::endl;
    }
    ENDL(4);
    {
        Okrag okrag(3);

        std::cout << okrag << std::endl;
    }
    ENDL(4);
    {
        Kula kul(5);

        std::cout << kul << std::endl;
    }
    ENDL(4);
    {
        Szescian s(6);

        std::cout << s << std::endl;
    }
    return 0;
}
