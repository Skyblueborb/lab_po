package pl.edu.pg.eti.ksg.po.lab1.transformacje;

public class ZlozenieTransformacji implements Transformacja {
    private final Transformacja[] tablicaTransformacji;

    public ZlozenieTransformacji(Transformacja[] tablicaTransformacji) {
        this.tablicaTransformacji = tablicaTransformacji;
    }

    @Override
    public Punkt transformuj(Punkt p) {
        Punkt wynik = p;
        for (int i = 0; i < tablicaTransformacji.length; i++) {
            wynik = tablicaTransformacji[i].transformuj(wynik);
        }
        return wynik;
    }

    @Override
    public Transformacja getTransformacjaOdwrotna() throws BrakTransformacjiOdwrotnejException {
        Transformacja[] odwrotnaTablica = new Transformacja[tablicaTransformacji.length];

        for (int i = 0; i < tablicaTransformacji.length; i++) {
            odwrotnaTablica[i] = tablicaTransformacji[tablicaTransformacji.length - 1 - i].getTransformacjaOdwrotna();
        }

        return new ZlozenieTransformacji(odwrotnaTablica);
    }

    @Override
    public String toString() {
        return "Zlozenie " + tablicaTransformacji.length + " transformacji.";
    }
}
