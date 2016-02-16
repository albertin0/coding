public class Solution {
	// DO NOT MODIFY THE LIST
	public int findMin(final List<Integer> a) {
	    int low =0, high =a.size()-1, mid, result=0;
	    if(a.get(low)<a.get(high))
	        return a.get(low);
	        int next, prev;
	    //mid = (high+low)/2;
	    //result = a.get(mid);
	    while(low<=high)
	    {
	        if(a.get(low)<a.get(high))
	            return a.get(low);
	        mid = (low+high)/2;
	        result = a.get(mid);
	        next = (mid+1)%a.size();    prev = (mid-1+a.size())%a.size();
	        if(a.get(mid)<=a.get(prev) && a.get(mid)<=a.get(next))
	            return result;
	        else if(a.get(mid)>=a.get(low))
	            low = mid+1;
	        else if(a.get(mid)<=a.get(high))
	            high = mid-1;
	        mid = (low+high)/2;
	    }
	    return result;
	}
}