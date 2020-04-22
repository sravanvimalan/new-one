/* Quick Find algorithm 
  con's
  *It's a Quadratic algorithm:
  
compile and execute:

sravan@sravan-DL-IPMSB-H61:~/Desktop$ javac QuickFind.java
sravan@sravan-DL-IPMSB-H61:~/Desktop$ java QuickFind

Enter the number of objects
5
press 1 : union
press 2 : check_connectivity
press 3 : exit

1
Enter Id 1:
0
Enter Id 2:
4
connected
press 1 : union
press 2 : check_connectivity
press 3 : exit

1
Enter Id 1:
2
Enter Id 2:
3
connected
press 1 : union
press 2 : check_connectivity
press 3 : exit

1
Enter Id 1:
1
Enter Id 2:
3
connected
press 1 : union
press 2 : check_connectivity
press 3 : exit

2
Enter Id 1:
1
Enter Id 2:
2
They are Connected
press 1 : union
press 2 : check_connectivity
press 3 : exit

2
Enter Id 1:
0
Enter Id 2:
2
They are not Connected
press 1 : union
press 2 : check_connectivity
press 3 : exit

1
Enter Id 1:
4
Enter Id 2:
2
connected
press 1 : union
press 2 : check_connectivity
press 3 : exit

2
Enter Id 1:
0
Enter Id 2:
1
They are Connected
press 1 : union
press 2 : check_connectivity
press 3 : exit

3

program:
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
