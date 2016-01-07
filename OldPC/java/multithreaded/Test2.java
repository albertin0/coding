public class Test2
{
	public static void main(String[] args)
	{
		Thread t1 = new Thread(new Test1());
		t1.start();
		while(true)
			System.out.println("Hi");
	}
}