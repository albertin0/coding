import java.util.*;
public class HuaweiLev1
{
	public static void main(String args[])
	{
		/*String s = "1#5#6#9#";
		len = Math.ceil(s.length());
		int i;
		for(i=0;i<s.length();i++)*/
		System.out.println(validtrianglesum("1#5#23"));

	}
	public static String validtrianglesum(String in)
    {
        //Write code here
        int i=0,j=0;//len = (int)Math.ceil(in.length()/2.0);
		ArrayList<Integer> arr = new ArrayList<Integer>();
        String str[] = in.split("#");
        //return Integer.toString(len);
        for(i=0;i<str.length;i++)
           	arr.add(Integer.parseInt(str[i]));
        //return Integer.toString(arr.get(9));
		j=1;int k=1,sum=0,maxr=0;
		String test="";
        for(i=0;i<arr.size();)
        {	
        	k=1;	maxr = 0;
        	while(k<=j)
        	{
        		if(i>=arr.size())
        			return "Invalid";
        		else
        		{
 				if(arr.get(i)>maxr)
 					maxr = arr.get(i);
 				i++;	k++;
 			}
 		}
 		j++;
 		test += Integer.toString(maxr) + " ";
 		sum += maxr;	
 	}
 	//return test;
 	return Integer.toString(sum);       			
    //return str[str.length-1];
    }
}
