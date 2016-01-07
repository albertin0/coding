public class Ex1 extends Thread
{
	private int i;
	Ex1(int i)
	{	this.i=i;	}
	public void run()
	{	for(int j=0;j<10;j++)
			System.out.println("Proc"+i +" :"+j);
	}
}
