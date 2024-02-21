//Body Mass Index (BMI) is a measure of health on weight. It can be calculated by taking your weight in kilograms and dividing by the square of your height in meters.
//Write a program that prompts the user to enter a weight in pounds and height in inches and displays the BMI.

// Import Libraries
import java.util.Scanner;

// Main Class
public class Prac1 {
    public static void main(String[] args) {
        double weight;
        System.out.println("Please Enter Your Weight in Pounds");
        Scanner weight_in_pounds = new Scanner(System.in);
        weight = weight_in_pounds.nextDouble();
        System.out.println("Weight in Pounds :" + weight);
        

        double height;
        System.out.println("Please Enter Height in Inches");
        Scanner height_in_inches = new Scanner(System.in);
        height = height_in_inches.nextDouble();
        System.out.println("Height in Inches :" + height);
        

        Double height_in_metres= height*0.0254;
        Double weight_in_kilogram = weight*0.45359237;
        System.out.println("Weight in Kilograms :" + weight_in_kilogram);
        System.out.println("Height in Metres :" + height_in_metres);

        Double bmi = (weight_in_kilogram)/(height_in_metres*height_in_metres);
        System.out.println("BMI is :"+bmi);

        // Closing Scanners
        weight_in_pounds.close();
        height_in_inches.close();
    }
}
