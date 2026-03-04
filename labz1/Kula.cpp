#include "Kula.hpp"
#include <iostream>
#include <numbers>

Kula::Kula(double r) : r(r) {
    std::cout << "Konstruktor Kuli o promieniu: " << r << std::endl;
}

Kula::~Kula() {
    std::cout << "Destruktor Kuli o promieniu: " << std::endl;
    std::cout << "- R: " << r << std::endl;
}

void Kula::SetR(double r) {
    this->r = r;
}

double Kula::Pole() const {
    return 4 * std::numbers::pi * pow(r, 2);
}

double Kula::O() const {
    return double(4) / 3 * std::numbers::pi * pow(r, 3);
}

void Kula::Wypisz(std::ostream& out) const {
    out << "Kula:" << std::endl;
    out << "- Promien: " << r << std::endl;
    out << "- Pole: " << Pole() << std::endl;
    out << "- O: " << O() << std::endl;
}
