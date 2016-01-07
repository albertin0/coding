public class ll
{
	public static void main(String args[])
	{
		node n1;
		n1= new node(3);
		n1.next= new node(4); 
		while(n1.item!=4)
		{
			System.out.println(n1.item);
			n1=n1.next;
		}
	}
}