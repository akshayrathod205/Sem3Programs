class Construct {
    Construct() {
        this(5);
        System.out.println("Default Constructor");
    }
    Construct(int x) {
        this(5,15);
        System.out.println(x);
    }
    Construct(int x, int y) {
        System.out.println(x * y);
    }
}
public class ConstructorChaining {
    public static void main(String[] args) {
        new Construct();
    }
}
