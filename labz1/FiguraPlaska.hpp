#pragma once
#include "Figura3D.hpp"

class FiguraPlaska : public Figura {
    public:
        virtual double Obwod() const = 0;
        virtual ~FiguraPlaska() {};
};
