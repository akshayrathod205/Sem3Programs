import java.io.File;
import java.io.IOException;
public class FileHandling {
    public static void main(String[] args) {
        try {
            File f = new File("D:\\Code\\Java Programs\\FileOperationExample.txt");
            if (f.createNewFile()) {
                System.out.println("File "+f.getName()+" is created successfully");
            }
            else {
                System.out.println("File is already existing in Directory");
            }
        }
        catch (IOException e) {
            System.out.println("An unexpected error occurred");
            e.printStackTrace();
        }
    }
}
