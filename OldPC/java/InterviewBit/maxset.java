import java.util.*;
public class maxset {
	public static void main(String args[]) {
	    ArrayList<ArrayList<Integer>> arr = new ArrayList<ArrayList<Integer>>();
	    ArrayList<Integer> arr2 = new ArrayList<Integer>();
	    ArrayList<Integer> a = new ArrayList<Integer>();
	    ArrayList<Long> sum_a =  new ArrayList<Long>();
	    int abc[] = {1967513926, 1540383426, -1303455736, -521595368};
	    int i,j;
	    for(i=0;i<abc.length;i++)
	    	a.add(abc[i]);
	    for(i=0;i<a.size();i++)
	    {
	        if(a.get(i)>=0)
	        {
	            if(i==0 || a.get(i-1)<0)
	                arr2 = new ArrayList<Integer>();
	            arr2.add(a.get(i));
	        }
	        else if(i!=0 && a.get(i-1)>=0)
	            arr.add(arr2);
	    }
	    if(a.get(a.size()-1)>=0)
	        arr.add(arr2);
	    long sum;   
        for(i=0;i<arr.size();i++)
	    {
	        sum = 0;
	        for(j=0;j<arr.get(i).size();j++)
	            sum+=arr.get(i).get(j);
	        sum_a.add(sum);
	    }
	    int index= -1;
	    sum= -1;
	    for(i=0;i<arr.size();i++)
	    {
	        if(sum_a.get(i)>sum)
            {
                sum = sum_a.get(i);
                index = i;
            }
            else if(sum_a.get(i)==sum && arr.get(i).size()>arr.get(index).size())
            {
                sum = sum_a.get(i);
                index = i;
            }
	    }
	    if(index==-1)
	        print1d(arr2);
	    else
	        print1d(arr.get(index));
	    
	}
	public static void print1d(ArrayList arr)
	{
		int i;
		for(i=0;i<arr.size();i++)
			System.out.print(" "+arr.get(i));
	}
}