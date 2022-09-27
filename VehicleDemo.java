import java.io.*;

interface Vehicle {
    void changeGear(int a);
    void speedUp(int a);
    void applyBrakes(int a);
}
class Bicycle implements Vehicle{
    int speed;
    int gear;
    public void changeGear(int newGear){
        gear = newGear;
    }
    public void speedUp(int increment){
        speed = speed + increment;
    }
    public void applyBrakes(int decrement){
        speed = speed - decrement;
    }
    public void printStates() {
        System.out.println("Speed: " + speed
                + "km/h Gear: " + gear);
    }
}
class Bike implements Vehicle {
    int speed;
    int gear;
    public void changeGear(int newGear){
        gear = newGear;
    }
    public void speedUp(int increment){
        speed = speed + increment;
    }
    public void applyBrakes(int decrement){
        speed = speed - decrement;
    }
    public void printStates() {
        System.out.println("Speed: " + speed
                + "km/h Gear: " + gear);
    }

}
class Car implements Vehicle {
    int speed;
    int gear;
    public void changeGear(int newGear){
        gear = newGear;
    }
    public void speedUp(int increment){
        speed = speed + increment;
    }
    public void applyBrakes(int decrement){
        speed = speed - decrement;
    }
    public void printStates() {
        System.out.println("Speed: " + speed
                + "km/h  Gear: " + gear);
    }
}
class VehicleDemo {
    public static void main (String[] args) {
        Bicycle bicycle = new Bicycle();
        bicycle.changeGear(2);
        bicycle.speedUp(25);
        bicycle.applyBrakes(10);
        System.out.println("Bicycle present state :");
        bicycle.printStates();

        Bike bike = new Bike();
        bike.changeGear(2);
        bike.speedUp(45);
        bike.applyBrakes(3);
        System.out.println("Bike present state :");
        bike.printStates();

        Car car = new Car();
        car.changeGear(3);
        car.speedUp(60);
        car.applyBrakes(5);
        System.out.println("Car present state :");
        car.printStates();
    }
}
