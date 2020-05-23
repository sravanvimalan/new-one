/*
input and output:
Name Sravan
Age: 22
choose an organ: 
	1. Left Eye
	2. Right Eye
	3. Heart
	4. Stomach
	5. Skin
	6. Quit
1
Name: Left Eye
Medical condition: Short Sight
Color Black
		 1.Close the eye
1
Left Eye Closed
choose an organ: 
	1. Left Eye
	2. Right Eye
	3. Heart
	4. Stomach
	5. Skin
	6. Quit
1
Name: Left Eye
Medical condition: Short Sight
Color Black
		 1.Open the Eye
1
Left Eye Opened
choose an organ: 
	1. Left Eye
	2. Right Eye
	3. Heart
	4. Stomach
	5. Skin
	6. Quit
2
Name: Right Eye
Medical condition: Normal
Color Black
		 1.Open the Eye
1
Right Eye Opened
choose an organ: 
	1. Left Eye
	2. Right Eye
	3. Heart
	4. Stomach
	5. Skin
	6. Quit
3
Name: Heart
Medical condition: Normal
Heart Rate: 75
		1. To change the Heart rate
1
Enter the New heart rate: 
95
Heart rate changed to: 95
choose an organ: 
	1. Left Eye
	2. Right Eye
	3. Heart
	4. Stomach
	5. Skin
	6. Quit
4
Name: Stomach
Medical condition: Good
Stomach is full
		1.Digest
1
Digest begins
choose an organ: 
	1. Left Eye
	2. Right Eye
	3. Heart
	4. Stomach
	5. Skin
	6. Quit
5
Name: Skin
Medical condition: Normal
Skin color: Black
choose an organ: 
	1. Left Eye
	2. Right Eye
	3. Heart
	4. Stomach
	5. Skin
	6. Quit
6

Process finished with exit code 0
*/
package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Patient patient = new Patient("Sravan",22,
                new Eye("Left Eye","Short Sight","Black",true),
                new Eye("Right Eye","Normal","Black",false),
                new Heart("Heart","Normal",75),new Stomach("Stomach","Good",false),
                new Skin("Skin","Normal","Black",70));
        System.out.println("Name "+patient.getName());
        System.out.println("Age: "+patient.getAge());

        Scanner scanner = new Scanner(System.in);

        boolean shouldfinish = false;

        while(!shouldfinish)
        {
            System.out.println("choose an organ: "+
                                "\n\t1. Left Eye"+
                                "\n\t2. Right Eye"+
                                "\n\t3. Heart"+
                                "\n\t4. Stomach"+
                                "\n\t5. Skin"+
                                "\n\t6. Quit");

            int choice = scanner.nextInt();
            switch (choice)
            {
                case 1:patient.getLeftEye().getDetails();
                        if(patient.getLeftEye().isOpened()) {
                            System.out.println("\t\t 1.Close the eye");
                            if (scanner.nextInt() == 1)
                                patient.getLeftEye().close();

                            else {
                                continue;
                            }
                        }
                        else{

                            System.out.println("\t\t 1.Open the Eye");
                            if(scanner.nextInt() == 1)
                            {
                                patient.getLeftEye().open();
                            }
                            else {
                                continue;
                            }

                }
                        break;
                case 2:patient.getRightEye().getDetails();
                    if(patient.getRightEye().isOpened()) {
                        System.out.println("\t\t 1.Close the eye");
                        if (scanner.nextInt() == 1)
                            patient.getRightEye().close();

                        else {
                            continue;
                        }
                    }
                    else{

                        System.out.println("\t\t 1.Open the Eye");
                        if(scanner.nextInt() == 1)
                        {
                            patient.getRightEye().open();
                        }
                        else {
                            continue;
                        }

                    }
                    break;
                case 3:patient.getHeart().getDetails();
                    System.out.println("\t\t1. To change the Heart rate");
                    if(scanner.nextInt() == 1)
                    {
                        System.out.println("Enter the New heart rate: ");
                        int newHeartRate = scanner.nextInt();
                        patient.getHeart().setRate(newHeartRate);
                        System.out.println("Heart rate changed to: "+patient.getHeart().getRate());
                    }
                    else
                    {
                        continue;
                    }
                    break;
                case 4:patient.getStomach().getDetails();
                    System.out.println("\t\t1.Digest");
                    if(scanner.nextInt() == 1)
                        patient.getStomach().digest();
                    else
                        continue;
                    break;
                case 5:patient.getSkin().getDetails();
                    break;
                default:shouldfinish=true;
                break;

            }
        }


    }
}
