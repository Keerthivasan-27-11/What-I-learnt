package myproject;
import java.util.Scanner;
public class Conditionlastatement {
public static void main(String[] args) {
	Scanner num = new Scanner(System.in);
	//input statement
	System.out.print("Enter the value of x :");
	int x=num.nextInt();
	System.out.print("Enter the value of y :");
	int y=num.nextInt();
	
	/*condition statement if
	 * if(condition){
	 * condition_block}*/
	System.out.println("The if statement");
	if(x>y){
		System.out.println("The vaue "+x+" is greater.");
	}
	
	/*condition statement if-else
	 * we cannot use else without if statemtn, but we can use if without declare a else statement.
	 */
	System.out.println("The if-else statement");
	if(x<y){
		System.out.println("The value "+y+" is greater.");
	}
	else {
		System.out.println("The value "+x+" is greatrer");
	}
	
	/*condition statement if else-if else*/
	System.out.println("The if else-if else statements.");
	if(x<y){
		System.out.println("The value "+y+" is greater.");
	}
	else if(x==y) {
		System.out.println("The values are equal");
	}
	else {
		System.out.println("The value "+x+" is greatrer");
	}
}
}
