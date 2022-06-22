package obiekty;

public class pojazd {

    public String marka;

    public static String identyfikator;

    public pojazd (String marka, String identyfikator) {
        pojazd.identyfikator = identyfikator;
        this.marka = marka;
    }


    public String getNazwa() {
        return marka;
    }

    public String getIdentyfikator() {
        return identyfikator;
    }


    @Override
    public String toString() {
        return "pojazd{" +
                "marka ='" + marka + '\'' +
                ", identyfikator=" + identyfikator +
                '}';
    }
}
