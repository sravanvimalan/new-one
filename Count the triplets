/*
Count the triplets
input:
sravan@sravan-DL-IPMSB-H61:~$ javac Count_triplets.java
sravan@sravan-DL-IPMSB-H61:~$ java Count_triplets
how many times:
2
array size
4
Enter the elements:
1
5
3
2
output:
The count of triplets:2

input:
array size
3
Enter the elements:
3
2
7

output:
The count of triplets:0
Triplets are not found

program:
*/
import java.util.Scanner;
class Count_triplets
{
	 public static int count=0;
	static void occurence(int sum,int[] arr)
	{
		
		for(int i=0;i<arr.length;i++)
		{
			if(sum == arr[i])
			{
				count++;
			}
		}
	}
	static void count(int[] arr)
	{
		int sum=0;
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr.length;j++)
			{
				if(i!=j)
				{
					sum=arr[i]+arr[j];
					occurence(sum,arr);
				}
				sum=0;
			}
		}
		System.out.println("The count of triplets:"+count/2);
		if(count == 0)
			System.out.println("Triplets are not found");
	}
	public static void main(String[] args)
	{
		int size,elements,times;
		Scanner sc = new Scanner(System.in);
		System.out.println("how many times:");
		times=sc.nextInt();
		while(times>0)
		{
			count=0;
			System.out.println("array size");
			size=sc.nextInt();
			int[] arr=new int[size];
			System.out.println("Enter the elements:");
			for(int i=0;i<size;i++)
				arr[i]=sc.nextInt();
			count(arr);
			times--;
		}
		
	}
}
