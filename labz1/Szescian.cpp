#include "Szescian.hpp"
#include <iostream>

Szescian::Szescian(double a) : a(a) {
    std::cout << "Konstruktor Szescianu: " << a << std::endl;
}

Szescian::~Szescian() {
    std::cout << "Destruktor Szescian o bokach: " << std::endl;
    std::cout << "- A: " << GetA() << std::endl;
}

void Szescian::SetA(double a) {
    this->a = a;
}

double Szescian::Pole() const {
    return 6*pow(a,2);
}

double Szescian::O() const {
    return a;
}

void Szescian::Wypisz(std::ostream& out) const {
    out << "Szescian:" << std::endl;
    out << "- A: " << GetA() << std::endl;
    out << "- Pole: " << Pole() << std::endl;
    out << "- O: " << O() << std::endl;
}
