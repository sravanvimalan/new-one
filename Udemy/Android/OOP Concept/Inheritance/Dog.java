package com.company;

public class Dog extends Animal{

    public Dog(String name, String color, boolean wing, int leg) {
        super(name, color, wing, leg);
    }

    @Override
    public void eat(String food) {
        super.eat(food);
    }
}
