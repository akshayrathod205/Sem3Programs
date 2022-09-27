import java.util.*;

class Book{ 
 String name; 
 String author;

void display(){
    Scanner sc = new Scanner(System.in);
     System.out.println("Kindly Enter Book Name : "); 
name = sc.nextLine();

System.out.println("Kindly Enter Author Name : "); 
author = sc.nextLine();

System.out.println("\nBook Name : "+name); 
System.out.println("Book Author : "+author);
}

}

class Reference_Book extends Book{

void display(){

//System.out.println("\n// * Onwards Reference Book Information * //"); 
System.out.println("\nEnter Reference Book Name : ");
Scanner sc = new Scanner(System.in);
 name = sc.nextLine(); 
 System.out.println("\nEnter Reference Book author Name : ");
 author=sc.nextLine();
 System.out.println("Reference Book Name is : "+name); 
 System.out.println("Reference Book author is : "+author); }

}

class Magzine extends Book{

void display(){

//System.out.println("\n// * Onwards Magzine Information * //"); 
System.out.println("\nEnter Magzine Name : "); 
Scanner sc = new Scanner(System.in);
name=sc.nextLine();
System.out.println("\nEnter Magzine author Name : "); 
author = sc.nextLine(); 
System.out.println("Book Name is : "+name);
System.out.println("The Magzine Name is : "+author);

}

}

public class BookStore {
public static void main(String[] args) {

Book b = new Book(); 
b.display();
Reference_Book ref = new Reference_Book(); 
ref.display(); 
Magzine mag = new Magzine(); 
mag.display();
}

}

