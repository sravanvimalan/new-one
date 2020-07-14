/*
Question:Given a string, the task is to remove duplicates from it.Expected time complexity O(n) where n is length of input string and extra space O(1) under 
the assumption that there are total 256 possible characters in a string.
input and output:
sravan@sravan-DL-IPMSB-H61:~/Desktop$ javac Remove_Duplicates.java
sravan@sravan-DL-IPMSB-H61:~/Desktop$ java Remove_Duplicates
Enter the word: GeeksforGeeks
Duplicates Removed: rsefGko
sravan@sravan-DL-IPMSB-H61:~/Desktop$ java Remove_Duplicates
Enter the word: geeks for geeks
Duplicates Removed:  rsefgko

program:

*/
import java.util.HashSet;
import java.util.Scanner;
class Remove_Duplicates
{
	public static void main(String[] args)
	{
		HashSet<Character> aplhabet = new HashSet<Character>();
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the word: ");
		String word = sc.nextLine();
		int len = word.length();
		int i = 0;
		//O(n)
		while(i  < len)
		{
			aplhabet.add(word.charAt(i));
			i++;
		}
		//print
		System.out.print("Duplicates Removed: ");
		for(Character j : aplhabet)
		{
			System.out.print(j);
		}
		System.out.print("\n");
	}
}
