package practice;
import java.util.Scanner;
public class Twodarray {
	public static void main(String[] args) {
		int a[][]=new int [3][3];
		int i,j;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter 2 D array");
		for(i=0;i<3;i++) {
			for(j=0;j<3;j++) {
				a[i][j]= sc.nextInt();
			}
		}
		System.out.println("the Two d array is ");
		for(i=0;i<3;i++) {
			for(j=0;j<3;j++) {
				System.out.print(""+a[i][j]);
			}
			System.out.println();
		}
		
	}
}
