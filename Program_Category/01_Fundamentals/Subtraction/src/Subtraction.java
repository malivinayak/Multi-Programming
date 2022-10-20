// Java Program to Add Two Numbers
import java.util.Scanner;
public class Subtraction{
    public static void main (String[] args){
    
    // Variables
    int num1, num2, sum;
    
    // Asking for input
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter first number: ");
    num1 = sc.nextInt();
    System.out.println("Enter second number: ");
    num2 = sc.nextInt();
    
    // Addition
    sum = num1 - num2;
    
    // Displaying output
    System.out.println("Difference of two numbers: " + sum);
    }
}
