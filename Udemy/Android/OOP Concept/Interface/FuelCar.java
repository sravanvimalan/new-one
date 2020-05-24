package com.company;

public class FuelCar implements CarInterface {
    int speed;

    public FuelCar(int speed) {
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
        System.out.println("fuel car starts running");
    }

    @Override
    public void stop() {
        System.out.println("fuel car stop running");
    }

    @Override
    public void speed() {
        System.out.println("car running at speed"+getSpeed());
    }
}
