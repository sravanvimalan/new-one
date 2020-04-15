/*
Linked List
imput and output
sravan@sravan-DL-IPMSB-H61:~/Desktop$ javac Linkedlist.java
sravan@sravan-DL-IPMSB-H61:~/Desktop$ java Linkedlist
40->30->50->70->35
5
program:
*/

public class Linkedlist {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Functions obj = new Functions();
		
		obj.insertAt(1,40);
		obj.insertAt(2,30);
		obj.insertAt(3,50);
		obj.insertAt(4,70);
		obj.insertAt(3,35);
		obj.print();
		int len = obj.length();
		System.out.println(len);

	}

}
