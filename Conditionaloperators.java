package myproject;
import java.util.Scanner;
public class Conditionaloperators {
	public static void main(String[] args) {
		Scanner num = new Scanner(System.in);
		System.out.print("Enter the value of a :");
		int a=num.nextInt();
		System.out.print("Enter the value of b :");
		int b=num.nextInt();
		if(a>b) {
			System.out.println("a is greater");
		}
		else if(a<b) {
			System.out.println("b is greater");
		}
		else if(a>=b) {
			System.out.println("a is greater than or equal to b");
		}
		else if(a<=b) {
			System.out.println("b is greater than or equal to a");
		}
		else if(a==b) {
			System.out.println("a is equal to b");
		}
		else if(a!=b) {
			System.out.println("a is not equal to b");
		}
		else{
			System.out.println("this invalid");
		}
	}
}
