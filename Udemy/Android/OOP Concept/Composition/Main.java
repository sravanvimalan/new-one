/*
output:
V8 turbo
Benz
test
*/
package com.company;

public class Main {

    public static void main(String[] args) {
        Engine engine = new Engine("V8 turbo",2000);
        Car mercedes = new Car(engine, "Benz");

        System.out.println(mercedes.getEngine().getName());
        System.out.println(mercedes.getName());
        mercedes.getEngine().test();

    }
}
