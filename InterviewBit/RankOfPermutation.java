public class RankOfPermutation
{
	static int cal(int fac, int n)
	{
		int i;
		long ret=1;
		for(i=2;i<=fac;i++)
		{
			ret = ret * (long)i;
			ret %= 1000003;
		}
		ret *= (long)n;
		ret %= 1000003;
		return (int)ret;
	}
	public static void main(String args[])
	{
		String in = "defbca";
		int i,j,small,rank = 1;//since ranking starts from 1
		for(i=0;i<in.length()-1;i++)
		{
			small = 0;
			for(j=i+1;j<in.length();j++)
			{	
				if(in.charAt(j)<in.charAt(i))
					small++;
			
			}
			rank += cal(in.length()-1-i,small);
			if(rank>=1000003)
				rank %=1000003;
		}
		System.out.println(rank+"\n");
	}
}