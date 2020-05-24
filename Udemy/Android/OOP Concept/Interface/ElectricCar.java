package com.company;

public class ElectricCar implements CarInterface {
    int speed;

    public ElectricCar(int speed) {
        this.speed = speed;
    }

    public int getSpeed() {
        return speed;
    }

    public void setSpeed(int speed) {
        this.speed = speed;
    }

    @Override
    public void start() {
        System.out.println("electric car start running");
    }

    @Override
    public void stop() {
        System.out.println("electric car stop running");
    }

    @Override
    public void speed() {
        System.out.println("car running at speed"+getSpeed());
    }
}
