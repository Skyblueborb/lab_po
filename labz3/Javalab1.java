package pl.edu.pg.eti.ksg.po.lab1;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.Skalowanie;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.BrakTransformacjiOdwrotnejException;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.Punkt;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.Transformacja;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.Obrot;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.ZlozenieTransformacji;
import pl.edu.pg.eti.ksg.po.lab1.transformacje.Symetria;

// public class Javalab1 {
//     public static void main(String[] args) {
//         A a = new A(5);
//         System.out.println("Pobieranie liczby:");
//         System.out.println(a.getLiczba());
//         System.out.println("Drukowanie całego obiektu:");
//         System.out.println(a);
//         a.setLiczba(6);
//         System.out.println("Drukowanie całego obiektu po ustawieniu liczby:");
//         System.out.println(a);
//         A a1 = new A(6);
//         System.out.println("Porównywanie referencji: a == a");
//         System.out.println(a == a);
//         System.out.println("Porównywanie referencji: a == a1");
//         System.out.println(a == a1);
//         System.out.println("Metoda equals: a.equals(a)");
//         System.out.println(a.equals(a));
//         System.out.println("Metoda equals: a.equals(a1)");
//         System.out.println(a.equals(a1));
//         System.out.println("Metoda hashCode: a.hashCode()");
//         System.out.println(a.hashCode());
//         System.out.println("Metoda hashCode: a1.hashCode()");
//         System.out.println(a1.hashCode());
//     }
// }

// public class Javalab1 {
//     public static void main(String[] args)
//     {
//         B b = new B(2.5);
//         System.out.println("Pobieranie liczby:");
//         System.out.println(b.getLiczba());
//         System.out.println("Drukowanie całego obiektu:");
//         System.out.println(b);
//         b.setLiczba(3.14);
//         System.out.println("Drukowanie całego obiektu po ustawieniu liczby:")
//             ;
//         System.out.println(b);
//         B b1 = new B(3.14);
//         System.out.println("Porównywanie referencji: b == b");
//         System.out.println(b == b);
//         System.out.println("Porównywanie referencji: b == b1");
//         System.out.println(b == b1);
//         System.out.println("Metoda equals: b.equals(b)");
//         System.out.println(b.equals(b));
//         System.out.println("Metoda equals: b.equals(b1)");
//         System.out.println(b.equals(b1));
//         System.out.println("Metoda hashCode: b.hashCode()");
//         System.out.println(b.hashCode());
//         System.out.println("Metoda hashCode: b1.hashCode()");
//         System.out.println(b1.hashCode());
//     }
// }

// public class Javalab1 {
//     public static void main(String[] args) {
//         /*
//          * Konstrukcja językowa try {} catch (...){} służy do
//          * obsługi wyjątków. Kod w bloku try jest monitorowany
//          * pod kątem wystąpienia wyjątku bądź wyjątków
//          * wspomnianych na początku bloku/bloków catch.
//          * Jeżeli gdzieś w bloku try wystąpi wyjątek, to sterowanie
//          * zostanie natychmiast przeniesione do bloku catch.
//          * Tam powinien znajdować się kod obsługujący wyjątek.
//          * Może to być np. wypisanie stosu wywołań na wyjście błędów
//          * lub zapisanie wyjątku w logach, lub wyrzucenie (zgłoszenie)
//          * innego wyjątku lepiej opisującego sytuacje (można załączyć
//          * wyjątek który zainicjował to zdarzenie patrz. Konstruktor
//          * klasy java.lang.Exception)
//          */
//         try {
//             Punkt p1 = Punkt.E_X;
//             System.out.println(p1);
//             Transformacja tr = new Translacja(5, 6);
//             System.out.println(tr);
//             Punkt p2 = tr.transformuj(p1);
//             System.out.println(p2);
//             Transformacja trr = tr.getTransformacjaOdwrotna();
//             System.out.println(trr);
//             Punkt p3 = trr.transformuj(p2);
//             System.out.println(p3);
//         } catch (BrakTransformacjiOdwrotnejException ex) {
//             ex.printStackTrace();
//         }
//         System.out.println();
//         try {
//             Punkt p1 = new Punkt(2, 2);
//             System.out.println(p1);
//             Transformacja tr2 = new Skalowanie(5, 4);
//             System.out.println(tr2);
//             Punkt p2 = tr2.transformuj(p1);
//             System.out.println(p2);
//             Transformacja trr2 = tr2.getTransformacjaOdwrotna();
//             System.out.println(trr2);
//             Punkt p3 = trr2.transformuj(p2);
//             System.out.println(p3);
//         }
//         catch(BrakTransformacjiOdwrotnejException ex) {
//             ex.printStackTrace();
//         }
//         System.out.println();
//         try {
//             Punkt p1 = new Punkt(2, 2);
//             Transformacja tr2 = new Skalowanie(5, 0);
//             System.out.println(tr2);
//             System.out.println(p1);
//             Punkt p2 = tr2.transformuj(p1);
//             System.out.println(p2);
//             Transformacja trr2 = tr2.getTransformacjaOdwrotna();
//             System.out.println(trr2);
//             Punkt p3 = trr2.transformuj(p2);
//             System.out.println(p3);
//         }
//         catch(BrakTransformacjiOdwrotnejException ex) {
//             ex.printStackTrace();
//         }
//         System.out.println();
//     }
// }


// public class Javalab1 {
//     public static void main(String[] args) {
//         Punkt p_obr = new Punkt(1, 0);
//         Transformacja obrot = new Obrot(Math.toRadians(90));
//         System.out.println("Oryginał: " + p_obr);
//         Punkt poObrocie = obrot.transformuj(p_obr);
//         System.out.println("Po obrocie o 90 stopni: " + poObrocie);
//     }
// }

public class Javalab1 {
    public static void main(String[] args) {
        try {
            Punkt p_start = new Punkt(2, Math.PI / 2);

            Transformacja[] tab = new Transformacja[4];
            tab[0] = new Skalowanie(0);
            tab[1] = new Symetria(true);
            tab[2] = new Symetria(false);
            tab[3] = new Obrot(Math.PI / 2);

            Transformacja zlozenie = new ZlozenieTransformacji(tab);
            Transformacja zlozenieOdwrotne = zlozenie.getTransformacjaOdwrotna();

            System.out.println(p_start.equals(zlozenieOdwrotne.transformuj(zlozenie.transformuj(p_start))));
        } catch (BrakTransformacjiOdwrotnejException ex) {
            ex.printStackTrace();
        }
    }
}

// public class Javalab1 {
//     public static void main(String[] args) {
//         Punkt p = new Punkt(2, Math.PI / 6);
//         System.out.println("Punkt startowy: " + p);

//         Transformacja symetriaOX = new Symetria(true);
//         Punkt wynikOX = symetriaOX.transformuj(p);
//         System.out.println(symetriaOX + ": " + wynikOX);

//         Punkt powrot = symetriaOX.transformuj(wynikOX);
//         System.out.println("Powrót z symetrii OX do startu: " + powrot);
//     }
// }
