package pl.edu.pg.eti.ksg.po.lab2;

import java.util.HashSet;
import java.util.Set;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Grupa;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.SluchaczPostepow;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.SymulatorWycieczki;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Uczestnik;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Wycieczka;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.Droga;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.GestyLas;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.Las;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.Panorama;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.PrzeprawaPrzezRzeke;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy.DrewniaCerkiew;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.Czlowiek;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.PrzewodnikStudencki;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.Student;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.StudentKSG;

/**
 *
 * @author TB
 */
public class JavaLab2 {
    public static void main(String[] args) {
        Wycieczka w = polskieGory();

        PrzewodnikStudencki przewodnik =
            new PrzewodnikStudencki("Stefan", "Długonogi", Czlowiek.Plec.MEZCZYZNA);
        Set<Uczestnik> uczestnicy = new HashSet<>();
        uczestnicy.add(new Student("Alojzy", "Mechanik", Czlowiek.Plec.MEZCZYZNA));
        uczestnicy.add(new Student("Ada", "Lovelace", Czlowiek.Plec.KOBIETA));
        uczestnicy.add(new Student("Jan", "Elektronik", Czlowiek.Plec.MEZCZYZNA));
        uczestnicy.add(new StudentKSG("Piotr", "Teledetekcyjny", Czlowiek.Plec.MEZCZYZNA));

        Grupa g = new Grupa(przewodnik, uczestnicy);

        SymulatorWycieczki symulator = new SymulatorWycieczki(g, w);

        symulator.addSluchaczPostepow((element, lp, liczba) -> {
            int percent = (lp * 100) / liczba;
            StringBuilder pasek = new StringBuilder("[");
            for (int i = 0; i < 20; i++) {
                if (i < (lp * 20) / liczba) {
                    pasek.append("#");
                } else {
                    pasek.append("-");
                }
            }
            pasek.append("] ")
                .append(percent)
                .append("% (")
                .append(lp)
                .append("/")
                .append(liczba)
                .append(") ")
                .append(element.getNazwa());
            System.out.println(pasek.toString());
        });

        symulator.symuluj();
    }

    public static Wycieczka polskieGory() {
        Wycieczka ret = new Wycieczka("Polskie Góry");
        ret.dodajElementWycieczki(new Droga(2.0));
        ret.dodajElementWycieczki(new Panorama());
        ret.dodajElementWycieczki(new Las(3.0));
        ret.dodajElementWycieczki(new Droga(2.0));
        ret.dodajElementWycieczki(new PrzeprawaPrzezRzeke(1.5));
        ret.dodajElementWycieczki(new GestyLas(2.0));
        ret.dodajElementWycieczki(new Droga(3.0));
        ret.dodajElementWycieczki(new DrewniaCerkiew("Lipnica"));
        ret.dodajElementWycieczki(new Droga(2.0));

        return ret;
    }

    public static Wycieczka doDydiowki() {
        Wycieczka ret = new Wycieczka("Do Dydiówki");
        ret.dodajElementWycieczki(new Droga(1.0));
        ret.dodajElementWycieczki(new DrewniaCerkiew("Smolnik"));
        ret.dodajElementWycieczki(new Droga(4.0));
        //        ret.dodajElementWycieczki(new PrzeprawaPrzezRzeke(1.0));
        //        ret.dodajElementWycieczki(new GestyLas(2.0));
        ret.dodajElementWycieczki(new Las(2.0));
        ret.dodajElementWycieczki(new Droga(5.0));

        return ret;
    }
}
