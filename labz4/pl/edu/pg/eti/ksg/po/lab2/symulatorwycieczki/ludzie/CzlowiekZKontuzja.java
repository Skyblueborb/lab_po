package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Wedrowka;

public class CzlowiekZKontuzja extends Czlowiek {
    public CzlowiekZKontuzja(String imie, String nazwisko, Plec plec) {
        super(imie, nazwisko, plec, 2.0);
    }

    @Override
    public int getUmiejetnosciNawigacyjne() {
        return 2;
    }

    @Override
    public void reagujNaWedrowke(Wedrowka w, double czas) {
        mow("Ah te kolano, ta kontuzja daje mi się we znaki...");
        super.reagujNaWedrowke(w, czas);
    }
}
