public class pallindrome {
	public static boolean isPalindrome(int a) {
		
	    int i,j,len,fir,las,len2;
	    j=a;
	    i=0;
	    while(j>0)
	    {    j=j/10;    i++;    }
	    len2 = len = i;
	    System.out.println(len);
	    for(i=1;i<=len2/2; i++)
	    {
	        fir = a/(int)(Math.pow(10.0,(len-1)));
	        las = a%10;
	        System.out.println("a "+i+" :"+a);
	        System.out.println("len "+i+" :"+len);
	        System.out.println("first "+i+" :"+fir);
	        System.out.println("last "+i+" :"+las);
	        if(fir!= las)  return false;
	        a = a - fir*(int)(Math.pow(10.0,(len-1)));//minus
	        a = a/10;
	        len-=2;
	    }
	    return true;
	}
	public static void main(String[] args)
	{
		System.out.println(isPalindrome(123454321));
	}
}
