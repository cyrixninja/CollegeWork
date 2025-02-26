import java.io.*;
import java.net.*;

public class Client {
    public static void main(String[] args) {
        try {
            // Connect to server
            Socket socket = new Socket("localhost", 5000);
            System.out.println("Connected to server");
            
            // Set up input and output streams
            BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
            
            // Send request to server
            out.println("REQUEST_DATE_TIME");
            System.out.println("Request sent to server");
            
            // Receive response from server
            String response = in.readLine();
            System.out.println("Server response: " + response);
            
            // Close the connection
            socket.close();
            System.out.println("Connection closed");
            
        } catch (IOException e) {
            System.out.println("Client exception: " + e.getMessage());
            e.printStackTrace();
        }
    }
}