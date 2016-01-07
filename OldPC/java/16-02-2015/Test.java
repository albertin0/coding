import java.util.HashSet;

public class Test
{
	public static void main(String[] args)
	{
		HashSet<String> names= new HashSet<String>();
		names.add("harry");
		names.add("harry2");
		names.add("harry3");
		names.add("harry4");
		names.add("harry5");
		System.out.println("Size of Collection :"+names.size());
		String name="Harry";
		for(String na : names)
			System.out.println(na);
	}
}