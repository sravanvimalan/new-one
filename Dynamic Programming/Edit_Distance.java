package learn;

public class Edit_Distance {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		logic
//		if there is match copy the edit distance from diagonal value
//		if there is mismatch write the min value of (left, top, diagonal) plus one..
		
		String string1="cart";
		String string2="march";
		
		int[][] matrix = new int[(string1.length())+1][(string2.length())+2];
		
		//create base matrix
		
		for(int i=0;i<=string1.length();i++)
		{
			matrix[i][0]=i;  //fill first column
		}
		for(int i=0;i<=string2.length();i++)
		{
			matrix[0][i]=i;  //fill first row
		}
		for(int i=1;i<=string1.length();i++)
		{
			for(int j=1;j<=string2.length();j++)
			{
//				took value from diagonal
				if(string1.charAt(i-1) == string2.charAt(j-1))
				{
					matrix[i][j]=matrix[i-1][j-1];
				}
				else
				{
//					find min value plus one
					if(matrix[i][j-1]  > matrix[i-1][j])
					{
						if(matrix[i-1][j] < matrix[i-1][j-1])
						{
							matrix[i][j]=matrix[i-1][j]+1;
						}
						else
						{
							matrix[i][j]=matrix[i-1][j-1]+1;
						}
					}
					else
					{
						if(matrix[i][j-1] < matrix[i-1][j-1])
						{
							matrix[i][j]=matrix[i][j-1]+1;
						}
						else
						{
							matrix[i][j]=matrix[i-1][j-1]+1;
						}
					}
				}
			}
		}
		//print
		System.out.print(matrix[string1.length()][string2.length()]);
			
}

}
