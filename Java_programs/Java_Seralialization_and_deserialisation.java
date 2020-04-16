/*
Java_Seralialization_and_deserialisation

input and output
sravan@sravan-DL-IPMSB-H61:~/Desktop$ javac Java_Seralialization_and_deserialisation.java
sravan@sravan-DL-IPMSB-H61:~/Desktop$ java Java_Seralialization_and_deserialisation
101

program:
*/
import java.io.FileOutputStream;
import java.io.FileInputStream;
import java.io.ObjectOutputStream;
import java.io.ObjectInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
class Student implements java.io.Serializable
{
	int sid=101;
	String sname = "Sravan";
	int age = 22;
}
class Java_Seralialization_and_deserialisation
{
	public static void main(String[] args)
	
		throws FileNotFoundException,IOException,ClassNotFoundException{

			    //Serailization
				FileOutputStream fos = new FileOutputStream("des");  //file name "des"
				ObjectOutputStream oos = new ObjectOutputStream(fos);

				Student obj = new Student();
				oos.writeObject(obj);

				//Deserialization

				FileInputStream fip = new FileInputStream("des");  //file name "des"
				ObjectInputStream ois = new ObjectInputStream(fip);
				Object O = ois.readObject();
				Student s1 = (Student)O ;

				System.out.println(s1.sid);



		}
	
}
