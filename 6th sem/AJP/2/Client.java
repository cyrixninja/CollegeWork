import java.net.*;
import java.io.*;
import java.util.Scanner;

public class Client {
    public static void main(String[] args) {
        final int SERVER_PORT = 9876;
        final String SERVER_IP = "localhost";
        try {
            DatagramSocket socket = new DatagramSocket();
            Scanner scanner = new Scanner(System.in);
            
            System.out.print("Enter a string to reverse: ");
            String input = scanner.nextLine();
            
            // Send the input string to the server
            byte[] sendBuffer = input.getBytes();
            InetAddress serverAddress = InetAddress.getByName(SERVER_IP);
            DatagramPacket sendPacket = new DatagramPacket(sendBuffer, sendBuffer.length, serverAddress, SERVER_PORT);
            socket.send(sendPacket);
            System.out.println("String sent to server.");
            
            // Receive the reversed string from the server
            byte[] receiveBuffer = new byte[1024];
            DatagramPacket receivePacket = new DatagramPacket(receiveBuffer, receiveBuffer.length);
            socket.receive(receivePacket);
            String reversed = new String(receivePacket.getData(), 0, receivePacket.getLength());
            System.out.println("Reversed string received: " + reversed);
            
            socket.close();
            scanner.close();
        } catch (IOException e) {
            System.out.println("Client error: " + e.getMessage());
            e.printStackTrace();
        }
    }
}