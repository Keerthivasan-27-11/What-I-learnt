package eclipse;
import java.util.Scanner;
public class Sumofnumbers {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner num=new Scanner(System.in);
		System.out.println("Enter the Starting value :");
		int a=num.nextInt();
		int sum=0;
		for(int i=1;i<=a;i++) {
			sum+=i;
		}
		System.out.println("The output value is :"+sum);
	}

}
