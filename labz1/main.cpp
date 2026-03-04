#include <iostream>
#include "FiguraPlaska.hpp"
#include "Kolo.hpp"
#include "Kula.hpp"
#include "Okrag.hpp"
#include "Prostokat.hpp"
#include "Szescian.hpp"
#include "Trojkat.hpp"

#define ENDL(x) \
    for (int i = 0; i < x; ++i) std::cout << std::endl;

int main(void) {
    // {
    //     Prostokat prosty(1, 2);
    //     FiguraPlaska* p2 = new Prostokat(2, 5);

    //     std::cout << "Pole prostokata p2: " << p2->Pole() << std::endl;

    //     std::cout << prosty << std::endl;
    //     ENDL(2);
    //     std::cout << *p2 << std::endl;
    //     delete p2;
    // }
    // ENDL(4);
    // {
    //     Trojkat troj(3, 4, 5);
    //     Trojkat* t2 = new Trojkat(6, 7, 9);

    //     std::cout << troj << std::endl;
    //     ENDL(2);
    //     std::cout << *t2 << std::endl;
    //     delete t2;
    // }
    // ENDL(4);
    // {
    //     Kolo kol(3);

    //     std::cout << kol << std::endl;
    // }
    // ENDL(4);
    // {
    //     Kolo over(3.14, true);

    //     std::cout << over << std::endl;
    // }
    // ENDL(4);
    // {
    //     Okrag okrag(3);

    //     std::cout << okrag << std::endl;
    // }
    // ENDL(4);
    // {
    //     Kula kul(5);

    //     std::cout << kul << std::endl;
    // }
    // ENDL(4);
    // {
    //     Szescian s(6);

    //     std::cout << s << std::endl;
    // }
    // ENDL(4);
    {
        Figura* tablica[4];
        tablica[0] = new Kula(4);
        tablica[1] = new Szescian(4);
        tablica[2] = new Kolo(4);
        tablica[3] = new Trojkat(4, 6, 7);

        for (int i = 0; i < 4; i++) {
            std::cout << std::endl;
            std::cout << "Figura nr: " << i + 1 << std::endl;
            std::cout << "Pole: " << tablica[i]->Pole() << std::endl;
            std::cout << "Obwod/Obj: " << tablica[i]->O() << std::endl;
        }

        ENDL(2);
        for (int i = 0; i < 4; i++) {
            delete tablica[i];
        }
    }
    return 0;
}
