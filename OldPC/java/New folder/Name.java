public class Name
{
	private String first,middle,last;
	public Name(String f,String m,String l)
	{
		first=f;
		middle=m;
		last=l;
	}
	public Name(String f,String l)
	{
		first=f;
		middle="";
		last=l;
	}
	public Name(String l)
	{
		first="";
		middle="";
		last=l;
	}
	public Name()
	{
		first="";middle="";last="";
	}
	public String toString()
	{
		return first+" "+middle+" "+last;
	}
}