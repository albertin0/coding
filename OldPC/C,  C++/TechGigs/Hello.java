public class Hello
{
	public static void main(String[] args)
	{
		System.out.println("Hello");
		String str="sdfvsdf68fsdfsf8999fsdf09";
   		String numberOnly= str.replaceAll("[^0-9]", "");
   		System.out.println(numberOnly);
   		
   		str="11#3#4";
   		String[] s=str.split("\\D+");
		int[] intarray=new int[s.length];
		for(int i=0;i<s.length;i++){
   			intarray[i]=Integer.parseInt(s[i]);
   			System.out.println(intarray[i]);
		}
	}
}