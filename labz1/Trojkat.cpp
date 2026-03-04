#include "Trojkat.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c) {
    std::cout << "Konstruktor Trojkata: " << a << ", " << b << ", " << c << std::endl;
}

Trojkat::~Trojkat() {
    std::cout << "Destruktor Trojkata o bokach: " << std::endl;
    std::cout << "- A: " << GetA() << std::endl;
    std::cout << "- B: " << GetB() << std::endl;
    std::cout << "- C: " << GetC() << std::endl;
}

void Trojkat::SetA(double a) {
    this->a = a;
}

void Trojkat::SetB(double b) {
    this->b = b;
}

void Trojkat::SetC(double c) {
    this->c = c;
}

double Trojkat::Obwod() const {
    return GetA() + GetB() + GetC();
}

double Trojkat::Pole() const {
    float p = Obwod() / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

void Trojkat::Wypisz(std::ostream& out) const {
    out << "Trojkat:" << std::endl;
    out << "- A: " << GetA() << std::endl;
    out << "- B: " << GetB() << std::endl;
    out << "- C: " << GetC() << std::endl;
    out << "- Obwod: " << Obwod() << std::endl;
    out << "- Pole: " << Pole() << std::endl;
}
