    #include<stdio.h>
    /*int bitXor(int x, int y) TLE 
    {
        int a = x & y;
        int b = ~x & ~y;
        int z = ~a & ~b;
        return z;
    } */
    int main()
    {
    	int in, n[400000], x, y, bound, i, len1, j, k, len2, max, a, b;
    	scanf("%d", &in);
    	for(i=0; i<in; i++)
    		scanf("%d", &n[i]);
    	max =0;
    	for(bound=1; bound<=in-1; bound++)
    	{
    		for(i=0; i<=bound-1; i++)
    		{
    			for(len1=1; len1<=bound-i; len1++)
    			{
    				x=0;
    				for(j=i; j<=i+len1-1; j++)
    				{	//x = bitXor(x,n[j]);
    					a = x & n[j];
    				    b = ~x & ~n[j];
        				x = ~a & ~b;
     
    				}
    				for(k=bound; k<=in-1; k++)
    				{
    					for(len2=1; len2<=in-k; len2++)
    					{
    						y = 0;
    						for(j=k; j<=k+len2-1; j++)
    						{   temp = y;
    							a = y & n[j];
        						b = ~y & ~n[j];
        						y = ~a & ~b;
                                if(y<temp)
        					}
    						if( x+y > max)
    							max = x+y;
    					}
    				}
    			}
    		}
    	}
    	printf("%d", max);
    	return 0;
    } 