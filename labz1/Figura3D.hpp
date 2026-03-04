#pragma once
#include "Figura.hpp"

class Figura3D : public Figura {
        public:
        virtual double Objetosc() const = 0;
        virtual ~Figura3D() = default;
};
