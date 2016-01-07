public class hash
{
	public static String hashstr(String input)
	{
		int i;
		String output="";
		for(i=0;i<input.length();i++)
		{
			output= output+ (char)((int)input.charAt(i)+1);
		}
		return output;
	}
	public static void main(String args[])
	{
		String s="abcd";
		System.out.println(hashstr(s));
	}
}