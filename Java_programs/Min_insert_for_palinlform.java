/*
Given a string, find the minimum number of characters to be inserted to convert it to palindrome.
For Example:
ab: Number of insertions required is 1. bab or aba
aa: Number of insertions required is 0. aa
abcd: Number of insertions required is 3. dcbabcd

input and output:

sravan@sravan-DL-IPMSB-H61:~/Desktop/calc_project$ java  Min_insert_for_palinlform
Enter the word
ab
Number of insertions required is 1

sravan@sravan-DL-IPMSB-H61:~/Desktop/calc_project$ javac Min_insert_for_palinlform.java
sravan@sravan-DL-IPMSB-H61:~/Desktop/calc_project$ java  Min_insert_for_palinlform
Enter the word
aa
Number of insertions required is 0

sravan@sravan-DL-IPMSB-H61:~/Desktop/calc_project$ java  Min_insert_for_palinlform
Enter the word
abcd
Number of insertions required is 3


*/
import java.util.Scanner;
import java.util.HashMap;
import java.util.*; 
class Min_insert_for_palinlform
{
	public static void main(String[] args)
	{
		HashMap<Character,Integer> hashmap = new HashMap<Character,Integer>();
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the word");
		String givenInput = sc.nextLine();
		int i=0,len=givenInput.length();
		int min_insert_count=0;
		while(i<len)
		{
		  if(!hashmap.containsKey(givenInput.charAt(i)))
		  {
		  	hashmap.put(givenInput.charAt(i),1);
		  }
		  else
		  {
		  	int count=hashmap.get(givenInput.charAt(i));
		  	count++;
		  	hashmap.put(givenInput.charAt(i),count);
		  }
		  i++;
		}
		 for (Character j : hashmap.keySet()) 
		 {
      		if(hashmap.get(j) % 2 == 1)
      		{
      			min_insert_count++;
      		}
  		 }
  		 if(min_insert_count == 0)
  		 {
  		 	System.out.println("Number of insertions required is "+min_insert_count);
  		 }
  		 else
  		 {
  		 	 System.out.println("Number of insertions required is "+(min_insert_count-1));
  		 }
  		
	}
}
