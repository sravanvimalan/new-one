package com.company;

public class Animal {
    private  String name;
    private String color;
    private boolean wing;
    private int leg;

    public Animal(String name, String color, boolean wing, int leg) {
        this.name = name;
        this.color = color;
        this.wing = wing;
        this.leg = leg;
    }
    public void eat(String food)
    {
        System.out.println(this.name+" eat "+food);
    }

    public String getName() {
        return name;
    }

    public String getColor() {
        return color;
    }

    public boolean isWing() {
        return wing;
    }

    public int getLeg() {
        return leg;
    }
}
