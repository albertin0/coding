public class Solution {
	public int sqrt(int a) {
	    long l=0,h=a,last=0,mid=0;
	    while(l<=h) {
	        mid = l+(h-l)/2;
	        System.out.println("l="+l+"   h="+h+"   mid="+mid);
	        if(mid*mid==a)  return (int)mid;
	        
	        else if(mid*mid>a)  {
	            h = mid-1;
	            last =0;
	        }
	        else    {
	            l = mid+1;
	            last =1;
	        }
	    }
	    if(last==0)     return (int)h;
	    else    return (int)l;
	}
	public static void main(String args[])	{
		Solution sol = new Solution();
		System.out.println(sol.sqrt(2147483647));
	}
}
