#include "Prostokat.hpp"
#include <iostream>
#include <ostream>

Prostokat::Prostokat(double a, double b) : a(a), b(b) {
    std::cout << "Konstruktor Prostokata: " << a << ", " << b << std::endl;
}

Prostokat::~Prostokat() {
    std::cout << "Destruktor Prostokata o bokach: " << std::endl;
    std::cout << "- A: " << GetA() << std::endl;
    std::cout << "- B: " << GetB() << std::endl;
}

void Prostokat::SetA(double a) {
    this->a = a;
}

void Prostokat::SetB(double b) {
    this->b = b;
}

double Prostokat::Obwod() const {
    return GetA() * 2 + GetB() * 2;
}

double Prostokat::Pole() const {
    return GetA() * GetB();
}

void Prostokat::Wypisz(std::ostream& out) const {
    out << "Prostokat:" << std::endl;
    out << "- A: " << GetA() << std::endl;
    out << "- B: " << GetB() << std::endl;
    out << "- Obwod: " << Obwod() << std::endl;
    out << "- Pole: " << Pole() << std::endl;
}
