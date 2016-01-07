import java.util.*;

public class PracticeInput
{
	public static void main(String[] args)
	{
		Scanner input= new Scanner(System.in);
		Scanner inputString = new Scanner(System.in);
		System.out.print("Enter a integer :");
		int a= input.nextInt();
		System.out.print("\n Enter a float :");
		float b= input.nextFloat();
		System.out.print("\n Enter a String :");
		String c= inputString.nextLine();
		System.out.print("\n Enter another String :");
		String g=  inputString.next();
		System.out.print("\n Enter a double :");
		double d= input.nextDouble();
		System.out.print("\n Enter a byte :");
		byte e= input.nextByte();
		System.out.print("\n Enter a boolean :");
		boolean f= input.nextBoolean();
		System.out.print("\n The values are : "+ a+" "+b+ " "+ c+ " " + d+ " "+ e+ " "+ f +" "+g);
	}
}