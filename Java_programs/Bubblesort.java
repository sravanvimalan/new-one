//just read input from the user and sorting using bubble sort :) Happy coding !!!
//here output will show like the working of bubblesort (step by step).
//compile by "javac BubbleSort" then run by  "java BubbleSort".
import java.util.Scanner;
class BubbleSort
{
	public static void bubblesort(int[] array)
	{
		
		for(int i=0;i<array.length-1;i++)
		{
			for(int j=0;j<array.length-i-1;j++)
			{
				if(array[j]>array[j+1])
				{
					int temp;
					temp=array[j+1];
					array[j+1]=array[j];
					array[j]=temp;
					System.out.print("\n");
					print(array);
	  
				}
			}


		}
	}

	public static void print(int[] array)
	{
		
		for(int i=0;i<array.length;i++)
	  {
	  	System.out.print(array[i]+"->");
	  }
	  

	}
	public static void main (String[] args)
	{
	  Scanner obj = new Scanner(System.in);
	  System.out.println("enter the sixe of array u want");
	  int size=obj.nextInt();
	  int[] array=new int[size];
	  System.out.println("Enter the numbers");
	  for(int i=0;i<size;i++)
	  {
	  	array[i]=obj.nextInt();
	  }
	  	BubbleSort obj1 = new BubbleSort();
	  	obj1.print(array);
	  	obj1.bubblesort(array);
	  	

	}
}
