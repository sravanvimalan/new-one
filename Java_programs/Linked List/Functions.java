public class Functions {
	static Node Head;
	public void insert(int data)
	{
		Node node = new Node();
		node.data =data;
		node.nextnode=null;
		
		if(Head == null)
		{
			Head = node; 
		}
		else
		{
			Node temp_node;
			temp_node = Head;
			while(temp_node.nextnode != null)
			{
				temp_node=temp_node.nextnode;
			}
			temp_node.nextnode=node;
		}
		
	}
	public void insertAt(int loc,int data)
	{
		Node node = new Node();
	    node.data = data;
	    node.nextnode=null;
		Node temp_node;
		if(loc == 1)
		{
			if(Head == null)
			{
				Head = node;
			}
			else
			{
				System.out.println(loc+"position is already filled");
			}
		}
		else
		{
			int len=length();
			if(loc == len+1 )
			{	
				
				temp_node = Head;
				while(temp_node.nextnode != null)
				{
					temp_node = temp_node.nextnode;
				
				}
				temp_node.nextnode = node;
				
			}
			else if(loc < len && loc >0)
			{
				if(loc == 1 && Head == null)
				{
						Head = node;
				}
				else 
				{
					System.out.println("hey");
					int i=1;
					temp_node = Head;
					while(i < loc-1)
					{
						temp_node=temp_node.nextnode;
						i++;
					}
					node.nextnode=temp_node.nextnode;
					temp_node.nextnode=node;

				}
			}
			else
			{
				System.out.println("Entering is not possible");
			}
		}
	}
	public static int length()
	{
		Node temp_node;
		if(Head == null)
		{
			return 0;
		}
		else
		{
			temp_node = Head;
			int count = 0;
			while(temp_node.nextnode != null)
			{
				temp_node=temp_node.nextnode;
				count++;
			}
			count+=1;
			return count;
		}
	}
	public void print()
	{
		
		if(Head == null)
		{
			System.out.println("no elements to display");
		}
		else
		{
			Node temp_node ;
			temp_node = Head;
			while(temp_node.nextnode != null)
			{
				System.out.print(temp_node.data+"->");
				temp_node = temp_node.nextnode;
			}
			System.out.println(temp_node.data);
			
		}
	}
	

}
