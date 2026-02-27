#include "Okrag.hpp"
#include <iostream>
#include <ostream>

Okrag::Okrag(double r) : Kolo(r) {
    std::cout << "Konstruktor okregu o promieniu: " << r << std::endl;
};

Okrag::~Okrag() {
    std::cout << "Destruktor okregu o promieniu: " << std::endl;
    std::cout << "- R: " << GetR() << std::endl;
}

double Okrag::Pole() const {
    return 0;
}

void Okrag::Wypisz(std::ostream& out) const {
    out << "Okrag:" << std::endl;
    out << "- Promien: " << GetR() << std::endl;
    out << "- Obwod: " << Obwod() << std::endl;
    out << "- Pole: " << Pole() << std::endl;
}
