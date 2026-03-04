#include "Figura3D.hpp"

class Kula : public Figura3D {
    private:
        double r;
    public:
        void Wypisz(std::ostream& out) const override;
        Kula(double r);

        double GetR() const { return r; };
        void SetR(double r);

        double Pole() const override;
        double Objetosc() const override;

        virtual ~Kula() override;
};
