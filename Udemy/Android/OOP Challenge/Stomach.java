package com.company;

public class Stomach  extends Organ{
    private boolean isEmpty;

    public Stomach(String name, String medicalCondition, boolean isEmpty) {
        super(name, medicalCondition);
        this.isEmpty = isEmpty;
    }

    public boolean isEmpty() {
        return isEmpty;
    }

    public void setEmpty(boolean empty) {
        isEmpty = empty;
    }

    @Override
    public void getDetails() {
        super.getDetails();
        if(this.isEmpty)
            System.out.println("Need to be fed");
        else
            System.out.println("Stomach is full");
    }
    public void digest()
    {
        System.out.println("Digest begins");
    }
}
