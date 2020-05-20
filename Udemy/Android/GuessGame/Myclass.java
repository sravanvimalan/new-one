/*
Welcome to Guess Number Game...wish you good luck

Do I know your name?

Sravan
Hello Sravan

shall we start the game ?
press 1: start
press 0: exit


1
ok game start..you have only 5 chances for guess! && guess value 1<=x<=20

Guess the number?


10
Wrong 4 chances left

Guess Higher

Guess the number?

15
Wrong 3 chances left

Guess Lower

Guess the number?

13
Wrong 2 chances left

Guess Lower

Guess the number?

11
Wrong 1 chances left

Guess Higher

Guess the number?

12
You win

*/package com.sravan;
	import java.util.Scanner;
	import java.util.Random;
	class Myclass
	{
	
		public static void main(String[] args)
		{
			String name;
			int i=5,rand_no;
			int start;
			Scanner sc = new Scanner(System.in);
			Random rand = new Random();
			System.out.println("Welcome to Guess Number...wish you good luck\n");
			System.out.println("Do I know your name?\n");
			name = sc.next();
			System.out.println("Hello "+name+"\n");
			System.out.println("shall we start the game ?\npress 1: start\npress 0: exit\n");
			start = sc.nextInt();
			if(start == 1)
				{
					System.out.println("ok game start..you have only 5 chances for guess! && guess value 1<=x<=20\n");
					rand_no = rand.nextInt(20+1);
					while(i > 0)
					{
						int no;
						System.out.println("Guess the number?\n");
						no = sc.nextInt();
						if(no == rand_no)
						{
							System.out.println("You win\n");
							sc.close();
							break;
						}
						else
						{
							System.out.println("Wrong "+(i-1)+" chances left\n");
							if(i == 1)
							{
								sc.close();
								System.out.println("Game Over");
								break;
							}
							if(no > rand_no)
								System.out.println("Guess Lower\n");
							else
								System.out.println("Guess Higher\n");
						}	
						i--;
					
					}
					
				}
			else
				{
					System.out.println("Exit successfuly\n");
					sc.close();
					return;
				}
		}
	}
