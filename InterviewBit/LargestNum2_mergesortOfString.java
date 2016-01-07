import java.util.*;
public class LargestNum2_mergesortOfString {
	// DO NOT MODIFY THE LIST
	public static int compare(int a1, int a2)
	{
	    String sa1 = Integer.toString(a1);
	    String sa2 = Integer.toString(a2)+sa1;
	    sa1 += Integer.toString(a2);
	    a1 = Integer.parseInt(sa1);
	    a2 = Integer.parseInt(sa2);
	    if(a1>=a2)
	        return 0;
	    else
	        return 1;
	}
	public static void Merge(ArrayList<Integer> a, int beg, int mid, int end)
	{
	    ArrayList<Integer> L = new ArrayList<Integer>();
	    ArrayList<Integer> R = new ArrayList<Integer>();
	    int i;
	    for(i=beg;i<=mid;i++)
	        L.add(a.get(i));
	    for(i=mid+1;i<=end;i++)
	        R.add(a.get(i));
	    int j,k,l;
	    k=beg;  j=i=0;
	    while(i<L.size() && j<R.size())
	    {
	        l = compare(L.get(i),R.get(j));
	        if(l==0)
	            a.set(k++,L.get(i++));
	        else
	            a.set(k++,R.get(j++));
	    }
	    while(i<L.size())
	        a.set(k++,L.get(i++));
	    while(j<R.size())
	        a.set(k++,R.get(j++));
	    //end
	}
	public static void SortList(ArrayList<Integer> a, int beg, int end)
	{
	    if(beg<end)
	    {
	        int mid = (end + beg)/2;
	        SortList(a,beg,mid);
	        SortList(a,mid+1,end);
	        Merge(a,beg,mid,end);
	    }
	    //else stop
	}
	public static String largestNumber(final List<Integer> a) {
	    ArrayList<Integer> arr = new ArrayList<Integer>();
	    int i;
	    for(i=0;i<a.size();i++)
	        arr.add(a.get(i));
	    SortList(arr,0,arr.size()-1);
	    String ans = "";
	    for(i=0;i<arr.size();i++)
	        ans += Integer.toString(arr.get(i))+ " ";
	    return ans;
	}
	public static void main(String[] args)
	{
		ArrayList<Integer> a = new ArrayList<Integer>();
		a.add(99);
		a.add(23);
		a.add(1);
		a.add(9);
		System.out.println(largestNumber(a));
	}
}
