package learn;

public class Binomial_Coefficient {
  
	 static int count=0;
	 public static int c(int n,int x)
	 {
		if(x==0)
		{
			count++;
			return count;
		}
		if(n==x)
		{
			count++;
			return count;
		}
		return c(n-1,x-1)+c(n-1,x);
			
	 }
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//read value for n and x   "nCx"
		int n=10,x=7;
		c(n,x);
		System.out.println(count);
	}

}
