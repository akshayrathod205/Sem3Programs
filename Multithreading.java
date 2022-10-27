import java.util.*;
class MyThread1 extends Thread {
    public void run() {
            for (int i = 0; i < 5; i++)
                System.out.print(" a ");
    }
}
class MyThread2 extends Thread {
    public void run() {
            for (int i = 0; i < 5; i++) {
                try {
                    Thread.sleep(500);
                }catch (InterruptedException e) {
                    System.out.println(e);
                }
                System.out.print(" b ");
            }
    }
}
class MyThread3 extends Thread {
    public void run() {
            for (int i = 1; i <= 5; i++)
                System.out.print(" " + i + " ");
    }
}
public class Multithreading {
    public static void main(String[] args) {
        MyThread1 obj1 = new MyThread1();
        MyThread2 obj2 = new MyThread2();
        MyThread3 obj3 = new MyThread3();
        obj1.start();
        obj2.start();
        obj3.start();
    }
}
