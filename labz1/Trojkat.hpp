#pragma once

#include "FiguraPlaska.hpp"
#include <ostream>

class Trojkat : public FiguraPlaska {
    private:
        double a, b, c;
    protected:
        void Wypisz(std::ostream& out) const override;
    public:
        Trojkat(double a, double b, double c);

        double GetA() const { return a; };
        double GetB() const { return b; };
        double GetC() const { return c; };

        void SetA(double a);
        void SetB(double b);
        void SetC(double c);

        double O() const override;
        double Pole() const override;
        ~Trojkat() override;
};
