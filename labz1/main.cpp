#include <iostream>
#include "FiguraPlaska.hpp"
#include "Kolo.hpp"
#include "Prostokat.hpp"
#include "Trojkat.hpp"

int main(void) {
    {
        Prostokat prosty(1, 2);
        FiguraPlaska* p2 = new Prostokat(2, 5);

        std::cout << "Pole prostokata p2: " << p2->Pole() << std::endl;

        std::cout << prosty << std::endl;
        std::cout << p2 << std::endl;
        delete p2;
    }
    std::cout << std::endl;
    {
        Trojkat troj(3, 4, 5);
        Trojkat* t2 = new Trojkat(6, 7, 9);

        std::cout << troj << std::endl;
        std::cout << t2 << std::endl;
        delete t2;
    }
    std::cout << std::endl;
    {
        Kolo kol(3);

        std::cout << kol << std::endl;
    }

    return 0;
}
