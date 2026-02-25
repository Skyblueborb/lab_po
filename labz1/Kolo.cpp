#include "Kolo.hpp"
#include <cmath>
#include <iostream>
#include <ostream>
#include <numbers>

Kolo::Kolo(double r) : r(r) {
    std::cout << "Konstruktor Kola o promieniu: " << r << std::endl;
}

Kolo::~Kolo() {
    std::cout << "Destruktor Kola o promieniu: " << std::endl;
    std::cout << "- R: " << GetR() << std::endl;
}

void Kolo::SetR(double r) {
    this->r = r;
}

double Kolo::Obwod() const {
    return 2*std::numbers::pi*r;

}

double Kolo::Pole() const {
    return std::numbers::pi * pow(r, 2);
}

void Kolo::Wypisz(std::ostream& out) const {
    out << "Kolo:" << std::endl;
    out << "- Promien: " << GetR() << std::endl;
    out << "- Obwod: " << Obwod() << std::endl;
    out << "- Pole: " << Pole() << std::endl;
}
