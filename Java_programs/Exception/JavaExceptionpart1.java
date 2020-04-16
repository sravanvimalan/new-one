/*
sravan@sravan-DL-IPMSB-H61:~/Desktop$ javac JavaExceptionpart1.java
sravan@sravan-DL-IPMSB-H61:~/Desktop$ java JavaExceptionpart1
Divsion by Zero not possible
result: 0

program:
*/
class JavaExceptionpart1
{
	public static void main(String[] args)
	{
		int a=10,b=0,result=0;

		try
		{
			result = a/b;
		}
		catch(Exception e)
		{
			System.out.println("Divsion by Zero not possible");
		}
		System.out.println("result: "+result);
	}
}
