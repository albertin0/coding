public class RunnableTest
{
	public static void main(String[] args)
	{
		Thread t1=new Thread(new Runnable()
			{
				public void run()
				{
					int i;
					for(i=0;i<10;i++)
					System.out.println("Hello"+i);
				}
			});
		t1.start();
	}
}