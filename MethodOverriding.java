class Banking {
    void rateOfInterest() {
        System.out.println("RBI Rate of Interest = 5.90%");
    }
}
class PNB extends Banking {
    void rateOfInterest() {
        System.out.println("PNB Rate of Interest = 3.45%");
    }
}
class SBI extends Banking {
    void rateOfInterest() {
        System.out.println("SBI Rate of Interest = 8.55%");
    }
}
class BOI extends Banking {
    void rateOfInterest() {
        System.out.println("Bank of India Rate of Interest = 4.30%");
    }
}
public class MethodOverriding {
    public static void main(String[] args) {
        Banking bank = new BOI();
        bank.rateOfInterest();
    }
}
