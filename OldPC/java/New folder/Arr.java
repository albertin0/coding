import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;
import java.util.Random;

public class Arr
{
	public static void main(String[] args)
	{
		Random rand= new Random(System.currentTimeMillis());
		ArrayList<Integer> nums = new ArrayList<Integer>();
		int i;
		for(i=0;i<10;i++)
			nums.add(rand.nextInt(101));
		display(nums);
		Collections.reverse(nums);
		display(nums);
		Collections.sort(nums);
		display(nums);
		nums.add(3);
		display(nums);
		System.out.println(nums.get(0));
		nums.set(0,1);
		display(nums);
	}
	static void display(ArrayList<Integer> n)
	{
		int i=0;
		for(i=0;i<n.size();i++)
			System.out.print("  "+n.get(i));
		System.out.println("\n");
	}
}