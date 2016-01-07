import java.util.*;

public class Test1Successful
{
	public static void main(String args[])
	{
		ArrayList<ArrayList<Integer>> arr = new ArrayList<ArrayList<Integer>>();
		ArrayList<Integer> arr2;
		Random rand = new Random(System.currentTimeMillis());
		int i,j;
		for(j=0;j<2;j++)
		{
			arr2 = new ArrayList<Integer>();
			for(i=0;i<10;i++)
			{
				arr2.add(rand.nextInt(101));
				/*if(i/10 != (i+1)/10)
				{
					arr.add(arr2);
					arr2.clear();
				}*/
			}
			//arr.add(new ArrayList<Integer>());
			arr.add(arr2);
			//arr2.clear();
		}
		//System.out.println(arr.get(0).get(0));
		print2d(arr);
		//print1d(arr2);
	}
	public static void print2d(List<ArrayList<Integer>> arr)
	{
		int i,j;
		for(i=0;i<arr.size();i++)
		{
			for(j=0;j<arr.get(i).size();j++)
				System.out.print(arr.get(i).get(j)+"  ");
			System.out.println();	
		}
	}
	public static void print1d(ArrayList arr)
	{
		int i;
		for(i=0;i<arr.size();i++)
			System.out.print(" "+arr.get(i));
	}
}