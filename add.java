import java.util.*;

public class add {

    int a;
    int b;

    public add(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public int sum(){

       int  result = a + b;

       return result;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("input a");
        int a = sc.nextInt();
        System.out.println("input b");
        int b = sc.nextInt();

        System.out.println("the sum is: " + new add(a, b).sum());





    }


}