#include "Figura3D.hpp"

class Szescian : public Figura3D {
    private:
        double a;
    public:
        void Wypisz(std::ostream& out) const override;
        Szescian(double a);

        double GetA() const { return a; };

        void SetA(double a);

        double Pole() const override;
        double Objetosc() const override;

        virtual ~Szescian() override;
};
