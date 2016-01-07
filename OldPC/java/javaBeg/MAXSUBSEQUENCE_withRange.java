public class Solution {
	public ArrayList<Integer> maxset(ArrayList<Integer> a) {
	    int i,j;
	    ArrayList<Integer> beg = new ArrayList<Integer>();
	    ArrayList<Integer> end = new ArrayList<Integer>();
	    ArrayList<Integer> sum = new ArrayList<Integer>();
	    ArrayList<Integer> a2 = new ArrayList<Integer>();
	    //int len= (a.size()*(a.size()-1))/2;
	    int b,e,s;
	    
	    a2.add(a.get(0));
	    for(i=1;i<a.size();i++)
	        a2.add(a2.get(i-1)+a.get(i));
	    for(i=0;i<a.size();i++)//starting index
	    {
	        for(j=i;j<a.size();j++)//ending index
	        {
	            if(i==0 && j==a.size()-1)
	                continue;
	            beg.add(i);
	            end.add(j);
	            if(i==0)
	                sum.add(a2.get(j));
	            else
	                sum.add(a2.get(j)-a2.get(i-1));//sum[0:j]-sum[0:i-1]
	        }
	    }
	    s=b=0;e=-1;
	    for(i=0;i<sum.size();i++)
	    {
	        if(sum.get(i)>s)
	        {
	            s=sum.get(i);   e=end.get(i);    b=beg.get(i);   
	        }
	        else if(sum.get(i)==s && end.get(i)-beg.get(i)+1>e-b+1 )  
	        {
	            s=sum.get(i);   e=end.get(i);    b=beg.get(i);
	        }
	    }
	    ArrayList<Integer> arr = new ArrayList<Integer>();
	    
	    for(i=b;i<=e;i++)
	        arr.add(a.get(i));
	    return arr;
	}
}