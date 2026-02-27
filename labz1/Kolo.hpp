#pragma once

#include "FiguraPlaska.hpp"
#include <ostream>

class Kolo : public FiguraPlaska {
    private:
        double r;
    protected:
        void Wypisz(std::ostream& out) const override;
    public:
        Kolo(double r);
        Kolo(double r, bool overload);

        double GetR() const { return r; };

        void SetR(double r);

        double Obwod() const override;
        double Pole() const override;
        virtual ~Kolo() override;
};
