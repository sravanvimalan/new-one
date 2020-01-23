/*
program:
*/
import java.lang.String;
public class Palindrome
{
	public static boolean palin(String str)
	{
        System.out.println("hey");
		int i,j;
		i=0;j=str.length()-1;
		while(i<=j)
		{
           // System.out.println(str.charAt(i)+"\n"+str.charAt(j)+"\n");
			if(str.charAt(i) != str.charAt(j))
				return false;
            i++;
            j--;
		}
        return true;
	}
	public static void main(String[] args)
	{
		String str="appa";
        Palindrome obj = new Palindrome();
		if(obj.palin(str))
			System.out.println("Yes");
		else
			System.out.println("No");
	}
}
