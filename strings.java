import java.util.Arrays;
import static java.util.Arrays.sort;
public class strings {
    public static void main(String[] args) {
        String[] arr=new String[]{"deep","pranav","akshay","jainam","shaunak","sumil","sarthak","shagun","divya","aditya"};
        System.out.println("before");
        System.out.println(Arrays.toString(arr));
        System.out.println();
        for(int i=0;i<arr.length;i++){
            arr[i]=arr[i].substring(3);
        }
        System.out.println("after removing 3 characters: ");
        System.out.println(Arrays.toString(arr));
        System.out.println();
        System.out.println("after sorting into alphabetical order");
        sort(arr);
        System.out.println(Arrays.toString(arr));
    }
}