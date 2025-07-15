import java.util.Scanner;

public class Main {
    public static void add(int a){
        if(a==10){
            System.out.print("The end");
        }
        else{
            System.out.println(a);
            add(a+1);
        }
    }

    public static void main(String[] args) {
        Scanner n=new Scanner(System.in);
        System.out.println("enter the number :");
        int a=n.nextInt();
        add(a);
    }
}