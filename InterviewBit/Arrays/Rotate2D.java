public class Rotate2D {
	public void rotate(ArrayList<ArrayList<Integer>> a) {
	    int lev = a.size/2 , i,j,k,l,temp;
	    for(i=0;i<lev;i++) {
	        //if j=1 exchange a.get(i).get(k) & a.get(k).get(size-1-i)
	        //if j=2 a.get(i).get(k) & a.get(size-1-i).get(size-1-k)
	        //if j=3 a.get(i).get(k) & a.get(size-1-k).get(i)
	        for(k=i;k<=size-1-i;k++)    {
	            temp = a.get(i).get(k);     
	            a.get(i).get(k) = a.get(k).get(size-1-i);
	            a.get(k).get(size-1-i) = temp; 
	        }     
	        for(k=i;k=size-1-i;k++)    {
	            temp = a.get(i).get(k);     
	            a.get(i).get(k) = a.get(size-1-i).get(size-1-k);
	            a.get(size-1-i).get(size-1-k) = temp; 
	        }
	        for(k=i;k<=size-1-i;k++)    {
	            temp = a.get(i).get(k);     
	            a.get(i).get(k) = a.get(size-1-k).get(i);
	            a.get(size-1-k).get(size-1-i) = temp; 
	        }
	        temp = a.get(i).get(size-1-i);
	        a.get(i).set(size-1-i,a.get(size-1-i).get(i));
	        a.get(size-1-i).set(i,temp);
	    }
	    return a;
	}
}