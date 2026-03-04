
#include "Figura.hpp"
#include <ostream>

std::ostream& operator<<(std::ostream& os, const Figura& figura) {
    figura.Wypisz(os);
    return os;
}

Figura::~Figura() {}
