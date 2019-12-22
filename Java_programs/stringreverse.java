/*
REVERSE THE STRING WORD BY WORD IN JAVA
sravan@sravan-DL-IPMSB-H61:~/Documents/java_programs$ javac Reverse.java
sravan@sravan-DL-IPMSB-H61:~/Documents/java_programs$ java Reverse
enter the string 
I LOVE CODING :)
:) CODING LOVE I 
PROGRAM:
*/
import java.util.Scanner;
class Reverse
{
	 public static void main(String[] args)
	{
	 	String str;
	 	System.out.println("enter the string ");
	 	Scanner sc = new Scanner(System.in);
	 	str = sc.nextLine();
	 	sc.close();
	 	String[] arr = str.split(" ");
	 	String temp;
	 	int beg=0,end=arr.length-1;
	 	for(int i=0;i<arr.length/2;i++)
	 	{
	 			
				temp=arr[beg];
	 			arr[beg]=arr[end];
	 			arr[end]=temp;
	 			beg++;
	 			end--;
	 		
	 	}
	 	for(int i=0;i<arr.length;i++)
	 	System.out.print(arr[i]+" ");
	 	System.out.println();
	}
}
