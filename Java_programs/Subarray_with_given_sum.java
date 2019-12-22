/*
Subarray with given sum
input:
javac Subarray.java
sravan@sravan-DL-IPMSB-H61:~$ java Subarray
array size
5
enter the elements
1
2
3
4
5
given sum
12
output:
The index from 3 to 4
program:
*/
import java.util.Scanner;
class Subarray
{
	public static void main(String[] args)
	{
		int gsum ,first=0, curr_sum=0;
		Scanner sc = new Scanner(System.in);
		System.out.println("array size");
		int n=sc.nextInt();
		int[] arr = new int[n];
		System.out.println("enter the elements");
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		} 
		System.out.println("given sum");
		
		gsum=sc.nextInt();
		
		for(int i=0;i<n;i++)
		{
			
			curr_sum = curr_sum+arr[i];
			if(curr_sum>=gsum)
			{
				
				while(curr_sum>gsum)
				{
					curr_sum-=arr[first];
					first++;
				}
				if(curr_sum == gsum)
				{
					System.out.println("The index from "+(first+1)+" to "+i);
					break;
				}
				if(i==n)
					System.out.println("subarray not found");
			}
		}


	}
}
