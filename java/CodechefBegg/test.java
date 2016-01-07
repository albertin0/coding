import java.util.*;

public class test
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		String s[][] = new String[2][2];
		int i,j;
		for(i=0;i<2;i++) 
			for(j=0;j<2;j++)
				s[i][j]=in.next();
		//String s[][] = {{"asd","qwe","sgdsdG","sdgsdg","fdsg"},{"rty","ghj"}};
		System.out.println(s[0].length);
		for(i=0;i<2;i++)
			for(j=0;j<2;j++)
			System.out.println(s[i][j].length()+" "+s[i][j]);

	}
}