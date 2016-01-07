import java.util.*;

public class ForgottenLang
{
	public static void main(String args[])
	{
		Scanner in =  new Scanner(System.in);
		Scanner inNo = new Scanner(System.in);
		int t,n,k,l,i,j,size;
		t = inNo.nextInt();
		while(t>0)
		{
			n = inNo.nextInt();
			k = inNo.nextInt();
			String forgot[] = new String[n];
			boolean f[] = new boolean[n];
			for(i=0;i<n;i++)
			{
				forgot[i]=in.next();
				f[i] = false;
			}
			//String modern[][] = new String[k][];
			for(i=0;i<k;i++)
			{
				size = inNo.nextInt();
				//modern[i] = new String[size];
				String temp[] = new String[size];
				
				for(j=0;j<size;j++) //modern[i].length=size
				{	
					temp[j]= in.next();
					
					for(l=0;l<n && !f[l];l++)
						if(forgot[l].equals(temp[j]))
							f[l]=true;
				}
			}
			for(i=0;i<n;i++)
				if(f[i])
					System.out.print("YES ");
				else
					System.out.print("NO ");
			System.out.println();
			t--;
		}
	}
}