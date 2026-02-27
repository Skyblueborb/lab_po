#pragma once

#include "Kolo.hpp"
#include <ostream>

class Okrag: public Kolo {
    protected:
        void Wypisz(std::ostream& out) const override;
    public:
        Okrag(double r);

        double Pole() const override;
        ~Okrag() override;
};
