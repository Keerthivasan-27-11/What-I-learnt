package eclipse;
import java.util.Scanner;
public class Factorial {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner num=new Scanner(System.in);
		System.out.print("Enter the Strating value :");
		int fact=1;
		int a=num.nextInt();
		for(int i=1;i<=a;i++) {
			fact*=i;
		}
		System.out.println("The output is :"+fact);
	}

}
