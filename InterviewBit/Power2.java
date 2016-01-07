import java.util.*;
public class Power2
{
	public static void main(String args[])
	{
		/*Scanner input = new Scanner(System.in);
		int a = input.nextInt();
		if(a==1)
			System.out.print("A=1 and P=R\n");
		int i;
		double temp;
		for(i=2;i<=(int)Math.sqrt(a);i++)
		{
			temp = Math.log((double)a)/Math.log((double)i);
			if(temp%1==0)
			{
				System.out.print("A=i and P="+temp+" \n");
				break;
			}
		}
		System.out.print("No possible integral value of A and P\n");
		*/
		System.out.println(Math.round(Math.log(536870912)/Math.log(2.0)));
		System.out.println(Math.round(Math.pow(823543,1.0/7.0)));
	}
}