/* Write a program to demonstrate the following for String:
 a. Input a string from standard input
 b. Input a string from command line argument
 c. Find the length of it.
 d. Reverse a string
 e. Copy a string to another string
 f. Concatenate two strings
 g. Extract some bytes from string
 h. Get Substring
 i. Check string starts and ends with particular string
 j. Convert any data type object/variable to string
 k. Split a string using regular expressions
 l. Replace string with other
 m. Find the indexes of a string in another string
 n. Convert string to other types (byte and character array)
 o. Convert into uppercase and lowercase
 p. Check the equality of two strings (with and without consideration of case)
 q. Print the hashcode of string
*/

import java.util.Arrays;
import java.util.Scanner;

public class Prac3 {
    public static void main(String[] args) {
        // a. Input a string from standard input
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string:");
        String inputString = scanner.nextLine();

        // b. Input a string from command line argument
        String argString = args.length > 0 ? args[0] : "";

        // c. Find the length of it.
        System.out.println("Length of input string: " + inputString.length());

        // d. Reverse a string
        String reversedString = new StringBuilder(inputString).reverse().toString();
        System.out.println("Reversed string: " + reversedString);

        // e. Copy a string to another string
        String copiedString = new String(inputString);
        System.out.println("Copied string: " + copiedString);

        // f. Concatenate two strings
        String concatenatedString = inputString + argString;
        System.out.println("Concatenated string: " + concatenatedString);

        // g. Extract some bytes from string
        byte[] bytes = inputString.getBytes();
        System.out.println("Extracted bytes: " + Arrays.toString(bytes));

        // h. Get Substring
        String substring = inputString.substring(0, inputString.length()/2);
        System.out.println("Substring: " + substring);

        // i. Check string starts and ends with particular string
        System.out.println("Starts with 'a': " + inputString.startsWith("a"));
        System.out.println("Ends with 'z': " + inputString.endsWith("z"));

        // j. Convert any data type object/variable to string
        int number = 123;
        String numberString = Integer.toString(number);
        System.out.println("Number as string: " + numberString);

        // k. Split a string using regular expressions
        String[] splitString = inputString.split("\\s+");
        System.out.println("Split string: " + Arrays.toString(splitString));

        // l. Replace string with other
        String replacedString = inputString.replace('a', 'b');
        System.out.println("Replaced string: " + replacedString);

        // m. Find the indexes of a string in another string
        int index = inputString.indexOf("abc");
        System.out.println("Index of 'abc': " + index);

        // n. Convert string to other types (byte and character array)
        byte[] byteArray = inputString.getBytes();
        char[] charArray = inputString.toCharArray();
        System.out.println("Byte array: " + Arrays.toString(byteArray));
        System.out.println("Char array: " + Arrays.toString(charArray));

        // o. Convert into uppercase and lowercase
        System.out.println("Uppercase: " + inputString.toUpperCase());
        System.out.println("Lowercase: " + inputString.toLowerCase());

        // p. Check the equality of two strings (with and without consideration of case)
        System.out.println("Equals 'abc': " + inputString.equals("abc"));
        System.out.println("Equals 'ABC' (ignore case): " + inputString.equalsIgnoreCase("ABC"));

        // q. Print the hashcode of string
        System.out.println("Hashcode: " + inputString.hashCode());
    }
}