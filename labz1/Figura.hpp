#pragma once
#include <ostream>

class Figura {
    public:
        virtual void Wypisz(std::ostream& out) const = 0;
        friend std::ostream& operator<<(std::ostream& os, const Figura& figura);
        virtual double Pole() const = 0;
        virtual double O() const = 0;
        virtual ~Figura();
};

