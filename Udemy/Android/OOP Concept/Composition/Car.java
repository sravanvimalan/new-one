package com.company;

public class Car {

    private Engine engine;

    private  String name;

    public Car(Engine engine, String name) {
        this.engine = engine;
        this.name = name;
    }

    public Engine getEngine() {
        return engine;
    }

    public void setEngine(Engine engine) {
        this.engine = engine;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}
