package pl.edu.pg.eti.ksg.po.lab1.transformacje;

public class Skalowanie implements Transformacja {
    private final double skalaR;

    public Skalowanie(double skalaR) {
        this.skalaR = skalaR;
    }
    /*
     * W przypadku klasy Skalowanie metoda getTransformacjaOdwrotna
     * zgłasza błąd w przypadku braku transformacji odwrotnej
     * (z powodu dzielenia przez 0). Błąd ten jest zgłaszany za
     * pomocą specjalnej instrukcji throw która to powoduje
     * propagacje informacji o błędzie do metod wywołujących
     * do momentu aż maszyna wirtualna natrafi na fragment kodu
     * obsługujący wyrzucony wyjątek
     */
    @Override
    public Transformacja getTransformacjaOdwrotna() throws BrakTransformacjiOdwrotnejException {
        if(skalaR == 0)
            throw new BrakTransformacjiOdwrotnejException("Brak transformacji odwrotnej. Przynajmniej jeden z czynników skalowania jest równy 0.");
        return new Skalowanie(1/skalaR);
    }

    @Override
    public Punkt transformuj(Punkt p) {
        return new Punkt(this.skalaR * p.getR(), p.getAlpha());
    }

    public double getSkalaR() {
        return skalaR;
    }

    @Override
    public String toString() {
        return "Skalowanie "+skalaR+" R";
    }
}
