public class DateTest
{
	public static void main(String[] args)
	{
		Date today=new Date(11,24,2014);
		Date tomorrow=new Date();
		System.out.println("Today's date is: "+ today.getDate());
		tomorrow.setDate(11,25,2014);
	}
}
		