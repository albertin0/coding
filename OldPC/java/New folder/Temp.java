import java.util.Scanner;

public class Temp
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the temperature :");
		double temp= input.nextDouble();
		System.out.print("Enter Symbol(C/F) :");
		String s=input.next();
		double temp2= convert(temp,s);
		System.out.print("The temp is :"+temp2+" "+s);
	}
	static double convert(double t,String s)
	{
		if(s.equals("c") || s.equals("C"))
			return 5.0/9.0*(t-32.0) ;
		else
			return 9.0/5.0*t+32.0;
	}
}