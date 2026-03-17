package pl.edu.pg.eti.ksg.po.lab1.transformacje;

public class Obrot implements Transformacja {
    private final double alfa;

    public Obrot(double alfa) {
        this.alfa = alfa;
    }

    @Override
    public Punkt transformuj(Punkt p) {
        double noweX = p.getX() * Math.cos(alfa) - p.getY() * Math.sin(alfa);
        double noweY = p.getX() * Math.sin(alfa) + p.getY() * Math.cos(alfa);

        return new Punkt(noweX, noweY);
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
