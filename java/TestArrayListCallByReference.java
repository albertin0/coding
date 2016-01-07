import java.util.*;
public class TestArrayListCallByReference
{
	public static void testCall(ArrayList<Integer> arr)
	{
		int temp = arr.get(0);
		arr.set(0,arr.get(1));
		arr.set(1,temp);
	}
	public static void main(String[] args)
	{
		ArrayList<Integer> asd = new ArrayList<Integer>();
		asd.add(12);
		asd.add(34);
		testCall(asd);
		System.out.println(asd.get(0));
	}
}