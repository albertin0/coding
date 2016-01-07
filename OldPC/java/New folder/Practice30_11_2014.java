import java.util.Scanner;
import java.util.ArrayList;
import java.util.Random;
import java.util.Collections;

public class Practice30_11_2014
{
	public static void main(String[] args)
	{
		ArrayList<Integer> num = new ArrayList<Integer>();
		Random ran = new Random(System.currentTimeMillis());
		for ( int i=1; i<=10; i++)
			num.add(ran.nextInt(20));
		display(num);
		ArrayList<Integer> num2= new ArrayList<Integer>();
		num2 = num;
		Collections.reverse(num2);
		display(num2);
		Collections.sort(num2);
		display(num2);
		
	}
	
	public static void display(ArrayList arr)
	{
		int i;
		for( i=0; i<=arr.size()-1; ++i)
			System.out.print("\t"+ arr.get(i));
		System.out.println();
	}
}		