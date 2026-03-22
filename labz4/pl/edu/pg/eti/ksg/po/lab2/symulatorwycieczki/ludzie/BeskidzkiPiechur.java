package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Atrakcja;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy.DrewniaCerkiew;

public class BeskidzkiPiechur extends Czlowiek {
    public BeskidzkiPiechur(String imie, String nazwisko, Plec plec) {
        super(imie, nazwisko, plec, 2.5, 20, 20);
    }

    @Override
    public int getUmiejetnosciNawigacyjne() {
        return 2;
    }

    @Override
    public void reagujNaAtrakcje(Atrakcja a, double czas) {
        if (a instanceof DrewniaCerkiew) {
            mow("Piękna cerkiew, warte czasu na obejrzenie...");
            regeneruj(czas * 2);
        } else {
            super.reagujNaAtrakcje(a, czas);
        }
    }
}
