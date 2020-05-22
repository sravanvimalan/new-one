package com.company;

public class Phone {
    public String Name;
    public  String MemoryRam;
    public double ScreenSize;

    public Phone(String name, String memoryRam) {
        Name = name;
        MemoryRam = memoryRam;
    }

    public Phone(String name, String memoryRam, double screenSize) {
        Name = name;
        MemoryRam = memoryRam;
        ScreenSize = screenSize;
    }
}
