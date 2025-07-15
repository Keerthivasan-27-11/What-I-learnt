package hellowo;
import java.util.Scanner;
public class Matrix {
	    public static void main(String[] args) {
	        Scanner num=new Scanner(System.in);
	        int[][] a=new int[10][10];
	        int[][] b=new int[10][10];

	        System.out.print("Enter the number of rows :");
	        int row=num.nextInt();
	        System.out.print("Enter the number of columns :");
	        int column=num.nextInt();
	        for(int i=1;i<=row;i++)
	            for(int j=1;j<=column;j++){
	                System.out.print("Enter the value of the matrix a["+i+"]["+j+"] is :");
	                a[i][j]=num.nextInt();
	            }
	        for(int i=1;i<=row;i++)
	            for(int j=1;j<=column;j++){
	                System.out.print("Enter the value of the matrix b["+i+"]["+j+"[ is :");
	                b[i][j]=num.nextInt();
	            }
	        System.out.println("The addition of the two matrix is ");
	        for(int i=1;i<=row;i++)
	            for(int j=1;j<=column;j++){
	                a[i][j]+=b[i][j];
	                System.out.println("The value of the two is ["+i+"]["+j+"] is : "+a[i][j]);
	            }
	    }
	}

