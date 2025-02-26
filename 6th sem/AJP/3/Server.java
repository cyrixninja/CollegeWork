import java.io.*;
import java.net.*;

public class Server {
    public static void main(String[] args) {
        final int PORT = 5000;
        try (ServerSocket serverSocket = new ServerSocket(PORT)) {
            System.out.println("Server started. Waiting for client connections...");
            
            while (true) {
                try (
                    Socket clientSocket = serverSocket.accept();
                    BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                    PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true)
                ) {
                    System.out.println("Client connected: " + clientSocket.getInetAddress().getHostAddress());
                    
                    // Read the string sent by the client
                    String inputStr = in.readLine();
                    System.out.println("Received: " + inputStr);
                    
                    // Check if the string is a palindrome
                    String response = isPalindrome(inputStr) 
                        ? "The string is a palindrome." 
                        : "The string is not a palindrome.";
                    
                    // Respond to the client
                    out.println(response);
                    System.out.println("Sent response: " + response);
                } catch (IOException e) {
                    System.out.println("Error handling client connection: " + e.getMessage());
                }
            }
        } catch (IOException e) {
            System.out.println("Server exception: " + e.getMessage());
            e.printStackTrace();
        }
    }

    // Helper method to check if a string is a palindrome
    private static boolean isPalindrome(String str) {
        if (str == null)
            return false;
        String cleanStr = str.replaceAll("\\s+", "").toLowerCase();
        String reversed = new StringBuilder(cleanStr).reverse().toString();
        return cleanStr.equals(reversed);
    }
}