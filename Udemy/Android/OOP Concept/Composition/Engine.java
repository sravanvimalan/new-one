package com.company;

public class Engine {
    private String name;
    private int rpm;

    public Engine(String name, int rpm) {
        this.name = name;
        this.rpm = rpm;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getRpm() {
        return rpm;
    }

    public void setRpm(int rpm) {
        this.rpm = rpm;
    }
   public void test()
   {
       System.out.println("test");
   }
}
