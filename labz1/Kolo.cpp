#include "Kolo.hpp"
#include <iostream>
#include <numbers>
#include <ostream>

Kolo::Kolo(double r) : r(r) {
    std::cout << "Konstruktor Kola o promieniu: " << r << std::endl;
}

Kolo::Kolo(double r, bool overload) : r(r) {
    std::cout << "Konstruktor Kola o promieniu: " << r << std::endl;
    if (overload) std::cout << "[OVERLOAD]" << std::endl;
}

Kolo::~Kolo() {
    std::cout << "Destruktor Kola o promieniu: " << std::endl;
    std::cout << "- R: " << GetR() << std::endl;
}

void Kolo::SetR(double r) {
    this->r = r;
}

double Kolo::O() const {
    return 2 * std::numbers::pi * r;
}

double Kolo::Pole() const {
    return std::numbers::pi * pow(r, 2);
}

void Kolo::Wypisz(std::ostream& out) const {
    out << "Kolo:" << std::endl;
    out << "- Promien: " << GetR() << std::endl;
    out << "- O: " << O() << std::endl;
    out << "- Pole: " << Pole() << std::endl;
}
