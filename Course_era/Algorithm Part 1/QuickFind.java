/* Quick Find algorithm 
  con's
  *It's a Quadratic algorithm:
 */
 import java.util.*;
class QuickFind
{
	public static int[] id;
	public static void quickFind(int n)
	{
		id = new int[n];
		for(int i=0;i<n-1;i++)
			id[i]=i;
	}
	public static void check_connectivity()
	{
	  Scanner sc = new Scanner(System.in);
	  int pid,qid;
	  System.out.println("Enter Id 1:");
	  pid = sc.nextInt();
	  System.out.println("Enter Id 2:");
	  qid = sc.nextInt();
	  if(id[pid] == id[qid])
	  	System.out.println("They are Connected");
	  else
	  	System.out.println("They are not Connected");
	}
	public static void union()
	{
	  Scanner sc = new Scanner(System.in);
	  int pid,qid;
	  System.out.println("Enter Id 1:");
	  pid = sc.nextInt();
	  System.out.println("Enter Id 2:");
	  qid = sc.nextInt();

	  for(int i=0;i<id.length;i++)
	  {
	  	 if(id[pid] == id[i])
	  	 {
	  	 	id[i]=id[qid];
	  	 	
	  	 }
	  }
	  System.out.println("connected");
	}
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int obj_count;
		System.out.println("Enter the number of objects");
		obj_count = sc.nextInt();
		quickFind(obj_count);
		while(true)
		{
			int n;
			System.out.println("press 1 : union\npress 2 : check_connectivity\npress 3 : exit\n");
			n = sc.nextInt();
			switch(n)
			{
				case 1 :union();
						break;

				case 2:check_connectivity();
						break;

				case 3:return;


				default:System.out.println("Invalid");

			}
		}
	}
}
