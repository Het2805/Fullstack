package practice;

import java.util.Scanner;

public class Dowhile {
    public static void main(String[] args) {
        int a, b, ans = 0, choice;
        boolean flag = true;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a");
        a = sc.nextInt();

        System.out.println("Enter b");
        b = sc.nextInt();
        do {
            System.out.println("******************");
            System.out.println("1. add");
            System.out.println("2. sub");
            System.out.println("3. mul");
            System.out.println("4. div");
            System.out.println("5. exit");
            System.out.println("******************");
            System.out.println("Enter your choice");

            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    ans = a + b;
                    System.out.println("add : " + ans);
                    break;

                case 2:
                    ans = a - b;
                    System.out.println("sub : " + ans);
                    break;

                case 3:
                    ans = a * b;
                    System.out.println("mul : " + ans);
                    break;

                case 4:
                    if (b != 0) {
                        ans = a / b;
                        System.out.println("div : " + ans);
                    } else {
                        System.out.println("Cannot divide by zero");
                    }
                    break;

                case 5:
                    System.out.println("Thank you for using our services");
                    flag = false;
                    break;

                default:
                    System.out.println("Invalid choice");
            }
        } while (flag);    }
}