/*
0 working thread
0 Main thread
1 working thread
1 Main thread
2 working thread
2 Main thread
3 working thread
3 Main thread
4 Main thread
4 working thread

Process finished with exit code 0

program:
*/
package com.company;

public class Main {

    public static void main(String[] args) {

        Thread thread = new Thread(new Runnable() {
            @Override
            public void run() {
                for(int i=0;i<5;i++) {
                    System.out.println(i +" working thread");
                    try {
                        Thread.sleep(1000);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
            }
        });
        thread.start();
        for(int i=0;i<5;i++) {
            System.out.println(i + " Main thread");
            try {
                Thread.sleep(1000);
            } catch (Exception e) {
               e.printStackTrace();
            }
        }

    }
}
