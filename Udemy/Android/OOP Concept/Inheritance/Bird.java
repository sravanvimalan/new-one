package com.company;

public class Bird extends Animal{
    public Bird(String name, String color, boolean wing, int leg) {
        super(name, color, wing, leg);
    }

    @Override
    public void eat(String food) {
        super.eat(food);
        System.out.println(food+" finished eating");
    }
}
