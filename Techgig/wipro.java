import java.io.*;
public class wipro 
{ 
	public static void main(String[] args)
	{
		String in[] ={"5#7#2#4","1#8#1#3","6#2#9#5","1#6#2#8"}; 
		int a=0;
		String s1 = minimumCost(in,a);
		System.out.print(s1.equals("18,BDDR\0"));
	}
    public static String minimumCost(String[] input1,int input2)
    {
        //Write code here
        int len1 = input1.length;
        int i,j,len2;
        String sp[] = input1[0].split("#");
        len2 = sp.length;
        char[][] path= new char[len1][len2];
        int[][] dynamic = new int[len1][len2];
        for(i=0;i<len1;i++)
        {
        	sp = input1[i].split("#");
        	for(j=0;j<sp.length;j++)
        		dynamic[i][j] = Integer.parseInt(sp[j]);
        }
        path[0][0]='\0';
        for(i=1;i<len1;i++)
        {	path[i][0]='B';
			dynamic[i][0]+=dynamic[i-1][0];
		}
		for(i=1;i<len2;i++)
		{	path[0][i]='R';
			dynamic[0][i]+=dynamic[0][i-1];
		}
		for(i=1;i<len1;i++)
		{
			for(j=1;j<len2;j++)
			{
				if(dynamic[i-1][j-1]<=dynamic[i-1][j]&&dynamic[i-1][j-1]<=dynamic[i][j-1])//diagonal movement
				{
					dynamic[i][j]+=dynamic[i-1][j-1];
					path[i][j]='D';
				}
				else if(dynamic[i][j-1]<=dynamic[i-1][j]&&dynamic[i][j-1]<=dynamic[i-1][j-1])//right movement
				{
					dynamic[i][j]+=dynamic[i][j-1];
					path[i][j]='R';
				}
				else//bottom movement
				{
					dynamic[i][j]+=dynamic[i-1][j];
					path[i][j]='B';
				}
			}
		}
		i=len1-1;
		j=len2-1;
		String ans=Integer.toString(dynamic[i][j])+",";// = sb.toString();
		String path2="";
		while(i>=0||j>=0)
		{
			path2+=path[i][j];
			if(path[i][j]=='B')
				i--;
			else if(path[i][j]=='R')
				j--;
			else
			{	i--;	j--;	}
		}
		
		path2 = new StringBuffer(path2).reverse().toString();
		ans +=path2;
		ans = ans.substring(0,ans.length());
		return ans; 
    }
}
