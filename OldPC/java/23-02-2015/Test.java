public class Test
{
	private int a=1;
	public void increment()
	{	a++;	}

	public static void main(String[] args)
	{
		Test t1,t2;
		t1=new Test();
		t2=t1;
		System.out.println(t1.a+"\t"+t2.a);
		t1.increment();
		System.out.println(t1.a+"\t"+t2.a);
		t2.increment();		
		System.out.println(t1.a+"\t"+t2.a);
	}
}