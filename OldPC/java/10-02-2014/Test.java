public class Test
{
  public static void main(String[] args)
  {
    int i=1;
	while(i<=200)
	Sop(Math.pow((2.0+Math.pow(5.0,0.5)),i++)+"\n");
  }
  public static void Sop(String s)
  {
    System.out.print(s);
  }
  
}