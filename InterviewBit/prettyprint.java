import java.util.*;
public class prettyprint
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		//System.out.println(n);
		int rgear,cgear,temp,i,j;
		rgear = n;
		for(i=1;i<=2*n-1;i++)
		{	
			if(i<=n)//rgear is the smallest value attained in that row
				rgear = n-i+1;
			else
				rgear = i-n+1;
			temp =n;
			cgear = 0;
			for(j=1;j<=2*n-1;j++)
			{
				System.out.print(temp);
				if(j<n)
					if(temp>rgear)
						temp--;
					else
						cgear++;
				else 
					if(temp<n)
						if(cgear>0)
							cgear--;
						else
							temp++;
			}
			System.out.println();
		}
			int k = 0x7fffffff;
			System.out.print(k);
	}
}