/*
ouput:
Pug eat meat
Crow eat food waste
food waste finished eating
name :Pug
color :cream white
no of legs :4
isWing :false


name :Crow
color :black
no of legs :2
isWing :true

Process finished with exit code 0

program:
*/
package com.company;

public class Main {

    public static void main(String[] args) {
        Dog pug = new Dog("Pug","cream white",false,4);
        pug.eat("meat");
        Bird crow = new Bird("Crow","black",true,2);
        crow.eat("food waste");
        System.out.println("name :"+pug.getName());
        System.out.println("color :"+pug.getColor());
        System.out.println("no of legs :"+pug.getLeg());
        System.out.println("isWing :"+pug.isWing());
        System.out.println("\n");
        System.out.println("name :"+crow.getName());
        System.out.println("color :"+crow.getColor());
        System.out.println("no of legs :"+crow.getLeg());
        System.out.println("isWing :"+crow.isWing());
    }
}
