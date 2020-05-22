/*
output:
Iphone 11
16 Gb
Pixel 11
8 Gb
5.9

Process finished with exit code 0

*/
package com.company;

public class Main {

    public static void main(String[] args) {
        Phone iphone = new Phone("Iphone 11","16 Gb");
        Phone pixel = new Phone("Pixel 11","8 Gb",5.9);
        System.out.println(iphone.Name);
        System.out.println(iphone.MemoryRam);
        System.out.println(pixel.Name);
        System.out.println(pixel.MemoryRam);
        System.out.println(pixel.ScreenSize);
    }
}
