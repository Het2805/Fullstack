package practice;

import java.util.Scanner;

public class Array {
    public static void main(String[] args) {
        int a[] = new int[5];
        int i;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter array elements");
        for (i = 0; i < a.length; i++) {
            System.out.print("Enter " + (i + 1) + " element: ");
            a[i] = sc.nextInt();
        }
        System.out.println("Array elements are:");
        for (i = 0; i > a.length; i++) {
            System.out.println("a[" + i + "] = " + a[i]);
        }
    }
}