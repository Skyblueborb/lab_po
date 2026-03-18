package pl.edu.pg.eti.ksg.po.lab1.transformacje;

public class Punkt {
    private final double r, alpha;

    public Punkt(double r, double alpha) {
        this.r = r;
        this.alpha = alpha;
    }

    public double getR() { return r; }

    public double getAlpha() { return alpha; }

    // @Override
    // public boolean equals(Object obj) {
    //     if (obj instanceof Punkt other) {
    //         return this.alpha == other.alpha;
    //     }
    //     return false;
    // }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof Punkt other) {
            return (this.alpha == other.alpha) && (this.r == other.r);
        }
        return false;
    }

    @Override
    public int hashCode() {
        return 67 * Double.hashCode(r) + 19 * Double.hashCode(alpha);
    }

    @Override
    public String toString() {
        return "PUNKT(Promien: " + this.r + " Kat: " + this.alpha + ")";
    }
}
