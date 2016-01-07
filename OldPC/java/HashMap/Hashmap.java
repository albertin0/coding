import java.util.*;

public class Hashmap
{
	public static void main(String args[])
	{
		Scanner in =  new Scanner(System.in);
		Scanner no = new Scanner(System.in);
		HashMap<String,Integer> hm = new HashMap<String,Integer>();
		int i;
		for(i=0;i<5;i++)
		{
			String input= in.next();
			int in_no= no.nextInt();
			hm.put(input,in_no);
		}
		System.out.println("Enter the key to display it's value=");
		String key = in.next();
		System.out.println("Value for the key"+key+" ="+hm.get(key));
	}
}