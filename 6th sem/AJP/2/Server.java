import java.net.*;
import java.io.*;

public class Server {
    public static void main(String[] args) {
        final int PORT = 9876; // Server listens on port 9876
        try {
            DatagramSocket socket = new DatagramSocket(PORT);
            System.out.println("UDP Server listening on port " + PORT);

            byte[] receiveBuffer = new byte[1024];
            while (true) {
                // Receive packet from client
                DatagramPacket requestPacket = new DatagramPacket(receiveBuffer, receiveBuffer.length);
                socket.receive(requestPacket);

                String received = new String(requestPacket.getData(), 0, requestPacket.getLength());
                System.out.println("Received: " + received);

                // Reverse the received string
                String reversed = new StringBuilder(received).reverse().toString();
                byte[] sendBuffer = reversed.getBytes();

                // Send the reversed string back to the client
                InetAddress clientAddress = requestPacket.getAddress();
                int clientPort = requestPacket.getPort();
                DatagramPacket sendPacket = new DatagramPacket(sendBuffer, sendBuffer.length, clientAddress, clientPort);
                socket.send(sendPacket);
                System.out.println("Sent reversed string: " + reversed);
            }
        } catch(IOException e) {
            System.out.println("Server error: " + e.getMessage());
            e.printStackTrace();
        }
    }
}