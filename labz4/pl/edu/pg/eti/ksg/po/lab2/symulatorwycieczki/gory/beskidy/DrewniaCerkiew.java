package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Atrakcja;

public class DrewniaCerkiew extends Atrakcja {
    private String miejscowosc;

    public DrewniaCerkiew(String miejscowosc) {
        super(0.5);
        this.miejscowosc = miejscowosc;
    }

    public String getMiejscowosc() {
        return miejscowosc;
    }

    @Override
    public String getNazwa() {
        return "Drewniana Cerkiew";
    }
}
