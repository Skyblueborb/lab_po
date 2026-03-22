package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Wedrowka;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.PrzeprawaPrzezRzeke;

public class BagiennyBiegacz extends Czlowiek {
    public BagiennyBiegacz(String imie, String nazwisko, Plec plec) {
        super(imie, nazwisko, plec, 6.0);
    }

    @Override
    public int getUmiejetnosciNawigacyjne() {
        return 4;
    }

    @Override
    public void reagujNaWedrowke(Wedrowka w, double czas) {
        if (w instanceof PrzeprawaPrzezRzeke) {
            aktualizujZmeczenie(czas * 0.5);
            mow("To jest idealny teren dla mnie! Poruszam się szybko i bez trudu.");
        } else {
            super.reagujNaWedrowke(w, czas);
        }
    }
}
