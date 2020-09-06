package learn;

public class Binomial_Coefficient {
  
	
	 public static int c(int n,int x)
	 {
		if(x==0)
		{	
			return 1;
		}
		if(n==x)
		{	
			return 1;
		}
		return c(n-1,x-1)+c(n-1,x);
			
	 }
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//read value for n and x   "nCx"
		int n=10,x=7;
		
		System.out.println(c(n,x));
	}

}
