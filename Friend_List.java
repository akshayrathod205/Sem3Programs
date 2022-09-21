import java.util.Vector;
import java.util.Scanner;
public class Friend_List {
    public static void main(String[] args) {
        int choice,n;
        String s;
        Scanner sc = new Scanner(System.in);
        Vector<String> vec = new Vector<String>();
        vec.add("Akshay");
        vec.add("Deep");
        vec.add("Pranav");
        vec.add("Shaunak");
        vec.add("Jainam");
        System.out.println("1.Delete Member\n2.Add Member at specific location\n3.Add Member at end\n4.Print contents of vector\n");
        do { 
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();
            switch(choice) {
                case 1: System.out.print("Enter index of element to be deleted: ");
                        n = sc.nextInt(); 
                        vec.removeElementAt(n);
                        break;
                case 2: System.out.print("Enter loction of element: ");
                        n = sc.nextInt();
                        System.out.print("Enter the element: ");
                        s = sc.next();
                        vec.add(n, s);
                        break;
                case 3: System.out.print("Enter the element: ");
                        s = sc.next();
                        vec.addElement(s);
                        break;
                case 4: System.out.println("The elements are: " +vec);
                        break;
                case 5: System.out.println("Exitng...");
                        break;
                default: System.out.println("Invalid input");
            }
        }while(choice != 5);
        sc.close();
    }
}