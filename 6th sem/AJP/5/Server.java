import java.net.*;
import java.io.*;

public class Server {
    public static void main(String[] args) {
        final int PORT = 9876;  // Server will listen on port 9876
        try (DatagramSocket socket = new DatagramSocket(PORT)) {
            System.out.println("UDP Server listening on port " + PORT);
            byte[] receiveBuffer = new byte[1024];

            while (true) {
                DatagramPacket requestPacket = new DatagramPacket(receiveBuffer, receiveBuffer.length);
                socket.receive(requestPacket);
                String received = new String(requestPacket.getData(), 0, requestPacket.getLength());
                System.out.println("Received list: " + received);
                String[] stringList = received.split(",");
                StringBuilder concatenated = new StringBuilder();
                for (String s : stringList) {
                    concatenated.append(s.trim());
                }

                String result = concatenated.toString();
                byte[] sendBuffer = result.getBytes();

                InetAddress clientAddress = requestPacket.getAddress();
                int clientPort = requestPacket.getPort();
                DatagramPacket sendPacket = new DatagramPacket(sendBuffer, sendBuffer.length, clientAddress, clientPort);
                socket.send(sendPacket);
                System.out.println("Sent concatenated string: " + result);
            }
        } catch(IOException e) {
            System.out.println("Server error: " + e.getMessage());
            e.printStackTrace();
        }
    }
}