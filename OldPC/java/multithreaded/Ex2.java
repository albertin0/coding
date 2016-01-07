public class Ex2
{
	public static void main(String... args)
	{
		Ex1 a=new Ex1(1);
		Ex1 b=new Ex1(2);
		new Ex1(3).start();
		a.start();
		b.start(); 
	}
}