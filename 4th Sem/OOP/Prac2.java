// Write a program that prompts the user to enter 10 integers and display the integers in decreasing order using loop. Use the ‘break’.

// Importing Libraries
import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections;

// Main Class
public class Prac2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Integer[] numbers = new Integer[10];
        

        // Prompt the user to enter 10 integers
        for (int i = 0; i < 10; i++) {
            System.out.print("Enter integer number " + (i+1) + ": ");
            numbers[i] = scanner.nextInt();
        }

        // Sort the integers in decreasing order
        Arrays.sort(numbers, Collections.reverseOrder());

        // Display the integers
        for (int num : numbers) {
            System.out.println(num);
        }

        scanner.close();
    }
}