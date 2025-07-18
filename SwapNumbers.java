package myfirstproject;

public class SwapNumbers {
public static void main(String[] args) {
	int a=15;
	int b=30;
	
	System.out.println("Before swap : a="+a+",b="+b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	System.out.println("After swaping : a="+a+",b="+b);
}
}
