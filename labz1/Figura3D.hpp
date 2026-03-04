#pragma once
#include "Figura.hpp"

class Figura3D : public Figura {
        public:
        virtual double O() const = 0;
        virtual ~Figura3D() = default;
};
