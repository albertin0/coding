import java.util.Scanner;
	
public class Bill
{
	public static void main(String[] args)
	{
		Scanner input= new Scanner(System.in);
		System.out.print("\n Enter your Bill: ");
		double bill= input.nextDouble();
		System.out.print("\n Enter discount % : ");
		double dis= input.nextDouble();
				
		double tip= tipCal(bill);
		bill= bill+ tip - discount(bill,dis);
		System.out.println("\n You should pay tip of :" +tip);
		System.out.println("\n Your total bill is :" + bill);
	}
	static double discount(double bill,double dis)
	{
		return dis * bill * .01 ;
	}
	static double tipCal(double bill)
	{
		return bill * .01;
	}
}