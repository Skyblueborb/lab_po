package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki;

public abstract class Atrakcja implements ElementWycieczki {
    private double czasZwiedzania;

    /**
     * @param czasZwiedzania - czas zwiedzania atrakcji w godzinach
     */
    public Atrakcja(double czasZwiedzania) {
        this.czasZwiedzania = czasZwiedzania;
    }

    public double getWymaganyCzas() {
        return czasZwiedzania;
    }
}