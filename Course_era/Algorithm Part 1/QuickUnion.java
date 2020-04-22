/* Quick_Union algorithm [Lazy algorithm]

*easily connect with other nodes
*using Recursion

input and output:
sravan@sravan-DL-IPMSB-H61:~/Desktop$ javac QuickUnion.java
sravan@sravan-DL-IPMSB-H61:~/Desktop$ java QuickUnion
Enter the number of objects
10

[0,1,2,3,4,5,6,7,8,9]

press 1 : union
press 2 : check_connectivity
press 3 : exit

1
Enter Id 1:
4
Enter Id 2:
3
Connected Successfully

[0,1,2,3,3,5,6,7,8,9]

press 1 : union
press 2 : check_connectivity
press 3 : exit

1
Enter Id 1:
3
Enter Id 2:
8
Connected Successfully

[0,1,2,8,3,5,6,7,8,9]

press 1 : union
press 2 : check_connectivity
press 3 : exit

1
Enter Id 1:
6
Enter Id 2:
5
Connected Successfully

[0,1,2,8,3,5,5,7,8,9]

press 1 : union
press 2 : check_connectivity
press 3 : exit

1
Enter Id 1:
9
Enter Id 2:
4
Connected Successfully

[0,1,2,8,3,5,5,7,8,8]

press 1 : union
press 2 : check_connectivity
press 3 : exit

1
Enter Id 1:
5
Enter Id 2:
0
Connected Successfully

[0,1,2,8,3,0,5,7,8,8]

press 1 : union
press 2 : check_connectivity
press 3 : exit

1
Enter Id 1:
7
Enter Id 2:
2
Connected Successfully

[0,1,2,8,3,0,5,2,8,8]

press 1 : union
press 2 : check_connectivity
press 3 : exit

1
Enter Id 1:
6
Enter Id 2:
1
Connected Successfully

[1,1,2,8,3,0,5,2,8,8]

press 1 : union
press 2 : check_connectivity
press 3 : exit

1
Enter Id 1:
7
Enter Id 2:
3
Connected Successfully

[1,1,8,8,3,0,5,2,8,8]

press 1 : union
press 2 : check_connectivity
press 3 : exit

2
Enter Id 1:
2
Enter Id 2:
3
They are Connected

[1,1,8,8,3,0,5,2,8,8]

press 1 : union
press 2 : check_connectivity
press 3 : exit

2
Enter Id 1:
4
Enter Id 2:
6
They are not Connected

[1,1,8,8,3,0,5,2,8,8]

press 1 : union
press 2 : check_connectivity
press 3 : exit

2
Enter Id 1:
3
Enter Id 2:
8
They are Connected

[1,1,8,8,3,0,5,2,8,8]

press 1 : union
press 2 : check_connectivity
press 3 : exit

3
program:
*/
import java.util.*;
class QuickUnion
{
	public static int[] id;
	public static void quickUnion(int n)
	{
		id = new int[n];
		for(int i=0;i<n;i++)
			id[i]=i;
	}
	public static int root(int i)
	{
		while(i != id[i])
			i = id[i];
		return i;
	}
	public static void union()
	{
	  Scanner sc = new Scanner(System.in);
	  int pid,qid;
	  System.out.println("Enter Id 1:");
	  pid = sc.nextInt();
	  System.out.println("Enter Id 2:");
	  qid = sc.nextInt();
 	  pid = root(pid);
 	  qid = root(qid);

 	  id[pid]=qid;

 	  System.out.println("Connected Successfully");

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

	public static void print()
	{
		System.out.print("\n["+id[0]);
		for(int i=1;i<id.length;i++)
			System.out.print(","+id[i]);
		System.out.println("]\n");

	}
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int obj_count;
		System.out.println("Enter the number of objects");
		obj_count = sc.nextInt();
		quickUnion(obj_count);
		print();
		while(true)
		{
			int n;
			System.out.println("press 1 : union\npress 2 : check_connectivity\npress 3 : exit\n");
			n = sc.nextInt();
			switch(n)
			{
				case 1 :union();
						print();
						break;

				case 2:check_connectivity();
					   print();
						break;

				case 3:return;


				default:System.out.println("Invalid");

			}
		}
	}
}
