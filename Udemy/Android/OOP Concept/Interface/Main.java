/*
fuel car starts running
fuel car stop running
car running at speed100


electric car start running
electric car stop running
car running at speed50

Process finished with exit code 0

program:
*/
package com.company;

public class Main {

    public static void main(String[] args) {

        CarInterface fuelCarInterface = new FuelCar(100);
        fuelCarInterface.start();
        fuelCarInterface.stop();
        fuelCarInterface.speed();
        System.out.println("\n");
        CarInterface electricCarInterface = new ElectricCar(50);
        electricCarInterface.start();
        electricCarInterface.stop();
        electricCarInterface.speed();

    }
}
