package pl.edu.pg.eti.ksg.po.lab1.transformacje;

public class Obrot implements Transformacja {
    private final double alfa;

    public Obrot(double alfa) {
        this.alfa = alfa;
    }

    @Override
    public Punkt transformuj(Punkt p) {
        double noweAlpha = (p.getAlpha() + this.alfa)% (2*Math.PI);

        return new Punkt(p.getR(), noweAlpha);
    }

    @Override
    public Transformacja getTransformacjaOdwrotna() throws BrakTransformacjiOdwrotnejException {
        return new Obrot(-alfa);
    }

    @Override
    public String toString() {
        return "Obrót o kąt " + alfa + " radianów";
    }
}
