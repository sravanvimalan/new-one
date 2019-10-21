/*
Merge unsort array:
input:
sravan@sravan-DL-IPMSB-H61:~/Documents/java_programs$ javac Merge_unsortarray.java
sravan@sravan-DL-IPMSB-H61:~/Documents/java_programs$ java Merge_unsortarray
enter the limit for first array 6
enter the limit for second array 4
enter the values for array 1
1
5
9
10
15
20
enter the value for array 2
2
3
8
13
output:
array 1
1
5
9
10
15
20
array 2
2
3
8
13
after merge in sort order
array 1
1
2
3
5
8
9
array 2
10
13
15
20
program:
*/
import java.util.Scanner;
class Merge_unsortarray
{
	 static void sortarr(int[] arr)
	 {
	 	for(int i=0;i<arr.length;i++)
	 	{
	 		for(int j=0;j<arr.length;j++)
	 		{
	 			if(arr[i]<arr[j])
	 			{
	 				int temp;
	 				temp=arr[i];
	 				arr[i]=arr[j];
	 				arr[j]=temp;
	 			}
	 		}
	 	}
	 }
	 static void printarr(int[] arr,int n)
	 {
	 	System.out.println("array "+n);
	 	for(int i=0;i<arr.length;i++)
	 	{
	 		System.out.println(arr[i]);
	 	}
	 }
	 static void mergearr(int[] arr1,int[] arr2)
	 {
	 	for(int i=0;i<arr1.length;i++)
	 	{
	 		for(int j=0;j<arr2.length;j++)
	 		{
	 			if(arr1[i]>arr2[j])
	 			{
	 				int temp;
	 				temp=arr1[i];
	 				arr1[i]=arr2[j];
	 				arr2[j]=temp;
	 			}
	 		}
	 	}
	 }
	public static void main(String[] args)
	{


		int n1,n2;
		System.out.print("enter the limit for first array ");
		Scanner sc = new Scanner(System.in);
		n1=sc.nextInt();
		int[] arr1 = new int[n1];
		System.out.print("enter the limit for second array ");
		n2=sc.nextInt();
		int[] arr2= new int[n2];
		System.out.println("enter the values for array 1");
		for(int i=0;i<n1;i++)
			arr1[i] = sc.nextInt();
		System.out.println("enter the value for array 2");
		for(int i=0;i<n2;i++)
			arr2[i] = sc.nextInt();
		sortarr(arr1);
		sortarr(arr2);
		printarr(arr1,1);
		printarr(arr2,2);
		mergearr(arr1,arr2);
		System.out.println("after merge in sort order");
		printarr(arr1,1);
		sortarr(arr2);
		printarr(arr2,2);


	}
}
