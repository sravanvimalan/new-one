package learn;

public class Printing_Longest_Common_Subsequence {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		String firstString="gxtxayb";
		String secondString="aggtab";
		int len1=firstString.length();
		int len2=secondString.length();
		len1++; //extra row
		len2++; //extra col
		int[][] arr = new int[len1][len2];
		
		//fill the first row and column with zeros
		
		for(int i=0;i<len1;i++)
		{
			for(int j=0;j<len2;j++)
			{
				arr[i][j]=0;
			}
		}
		for(int i=1;i<len1;i++)
		{
		   for(int j=1;j<len2;j++)
			{
				if(firstString.charAt(i-1) == secondString.charAt(j-1))
				{
					arr[i][j]=arr[i-1][j-1]+1;
				}
				else
				{
					if(arr[i][j-1] > arr[i-1][j] )
					{
						arr[i][j]=arr[i][j-1];
					}
					else
					{
						arr[i][j]=arr[i-1][j];
					}
				}
			}
		}
				
		System.out.print(arr[len1-1][len2-1]);      //return length
			
	}
}
