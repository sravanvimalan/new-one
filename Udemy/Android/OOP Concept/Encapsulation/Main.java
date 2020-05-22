/*
Encapsulation

output:
Iphone 11
16gb

Process finished with exit code 0

*/
package com.company;

public class Main {

    public static void main(String[] args) {
        Phone iphone = new Phone();
        iphone.setName("Iphone 11");
        iphone.setMemoryRam("16gb");
        //encapsulation
        System.out.println(iphone.getName());
        System.out.println(iphone.getMemoryRam());
    }
}
