import java.util.Scanner;

public class PredicateFunc
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		System.out.print("Plz enter a no.:  ");
		int n= input.nextInt();
		if(isEven(n))
			System.out.println(n +" is Even.");
		else
			System.out.println(n + " is odd");
	}
	public static boolean isEven(int n)
	{
		if(n%2==0)
			return true;
		else
			return false;
	}
}