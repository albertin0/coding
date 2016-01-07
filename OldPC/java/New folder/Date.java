public class Date
{
	private int month,day,year;
	public Date()
	{
		month=0;	day=0;	year=0;
	}
	public Date(int m,int d, int y)
	{
		month=m;	day=d;	year=y;
	}
	public Date(int m,int y)
	{
		month=m;	day=0;	year=y;
	}
	public void setDay(int d)
	{
		day=d;
	}
	public void setMonth(int m)
	{
		month=m;
	}
	public void setYear(int y)
	{
		year=y;
	}
	public void setDate(int m, int d, int y)
	{
		day=d;	month=m;	year=y;
	}
	public int putDay()
	{
		return day;
	}
	public int putMonth()
	{
		return month;
	}
	public int putYear()
	{
		return year;
	}
	public String getDate()
	{
		return month + "/" + day + "/" + year;
	}
}