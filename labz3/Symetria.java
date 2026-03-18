package pl.edu.pg.eti.ksg.po.lab1.transformacje;

public class Symetria implements Transformacja {

    private final boolean wzgledemOX;

    public Symetria(boolean wzgledemOX) {
        this.wzgledemOX = wzgledemOX;
    }

    @Override
    public Punkt transformuj(Punkt p) {
        double r = p.getR();
        double alpha = p.getAlpha();
        double noweAlpha;

        if (wzgledemOX) {
            noweAlpha = -alpha;
        } else {
            noweAlpha = Math.PI - alpha;
        }

        noweAlpha = (noweAlpha + 2 * Math.PI) % (2 * Math.PI);

        return new Punkt(r, noweAlpha);
    }

    @Override
    public Transformacja getTransformacjaOdwrotna() {
        return this;
    }

    @Override
    public String toString() {
        return "Symetria osiowa względem osi O" + (wzgledemOX ? "X" : "Y") +
               " (operacja na radianach)";
    }
}
