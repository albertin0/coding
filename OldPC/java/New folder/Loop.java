import java.util.Scanner;

public class Loop
{
	public static void main(String[] args)
	{
		Scanner input= new Scanner(System.in);
		int t= input.nextInt();
		while(true)
		{
			System.out.print(t+ "\t");
			t++;
			t=t%10;
			if(t==13)
			break;
		}
	}
}