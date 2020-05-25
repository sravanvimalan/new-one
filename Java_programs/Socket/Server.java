/*
ouput:
Waiting for clients
Connection Established

program:
*/
package com.company;

import java.io.BufferedReader;
import java.net.ServerSocket;
import java.net.Socket;
import java.io.*;

public class Server {

    public static void main(String[] args) {
    //server socket
            try {
                System.out.println("Waiting for clients");
                ServerSocket serverSocket = new ServerSocket(5000);
                Socket socket = serverSocket.accept();
                System.out.println("Connection Established");
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
                String str = bufferedReader.readLine();
                PrintWriter printWriter = new PrintWriter(socket.getOutputStream(),true);
                printWriter.println(str);
            }catch (Exception e){
                e.printStackTrace();
            }


    }
}
