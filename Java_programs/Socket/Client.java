/*
input and output:
Client Started
Enter the String
hello sravan
Server Says hello sravan
program:
*/
package com.company;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Socket;


public class Client {
    public static void main(String[] args) {
        try {
            System.out.println("Client Started");
            Socket socket = new Socket("localhost",5000);
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("Enter the String");
            String str = bufferedReader.readLine();
            PrintWriter printWriter = new PrintWriter(socket.getOutputStream(),true);
            printWriter.println(str);
            BufferedReader bufferedReader1 = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            String string = bufferedReader1.readLine();
            System.out.println("Server Says "+string);
        }catch (Exception e){
            e.printStackTrace();
        }

    }
}
