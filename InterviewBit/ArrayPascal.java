public class Solution {
	public ArrayList<ArrayList<Integer>> generate(int a) {
	    ArrayList<ArrayList<Integer>> ans = new ArrayList<ArrayList<Integer>>();
	    ArrayList<Integer> row = new ArrayList<Integer>();
	    row.add(1);
	    ans.add(row);
	    a--;
	    int i = 0,j;
	    while(a-- >=0)
	    {
	        row = new ArrayList<Integer>();
	        row.add(1);
	        lastIndex = ans.get(i).size()-2;
	        for(j=0;j<=lastIndex;j++)
	        {
	            temp1 = ans.get(i).get(j);
	            temp2 = ans.get(i).get(j+1);
	            row.add(temp1+temp2);
	        }
	        row.add(1);
	        ans.add(row);
	    }
	    return ans;
	}
}
