#pragma once

#include "FiguraPlaska.hpp"
#include <ostream>

class Prostokat : public FiguraPlaska {
    private:
        double a,b;
    protected:
        void Wypisz(std::ostream& out) const override;
    public:
        Prostokat(double a, double b);

        double GetA() const { return a; };
        double GetB() const { return b; };

        void SetA(double a);
        void SetB(double b);

        double O() const override;
        double Pole() const override;
        ~Prostokat() override;
};
