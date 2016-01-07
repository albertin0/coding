import java.util.*;
public class nodays
{
	public static void main(String args[])
	{
		String input1,input2;
		Scanner in = new Scanner(System.in);
		input1 = in.next();
		input2 = in.next();
		int nod = func(input1, input2);
		//System.out.println("\n no of days="+input1+" "+input2);
		System.out.println("\n no of days="+nod);
	}
	public static int func(String in1,String in2)
	{
		int d1=in1.charAt(0)-48;
		d1 = d1*10 + (int)in1.charAt(1)-48;

		int m1=in1.charAt(3)-48;
		m1 = m1*10 + in1.charAt(4)-48;

		int y1=in1.charAt(6)-48;
		y1 = y1*10 + in1.charAt(7)-48;
		y1 = y1*10 + in1.charAt(8)-48;
		y1 = y1*10 + in1.charAt(9)-48;

		int d2=in2.charAt(0)-48;
		d2 = d2*10 + in2.charAt(1)-48;

		int m2=in2.charAt(3)-48;
		m2 = m2*10 + in2.charAt(4)-48;

		int y2=in2.charAt(6)-48;
		y2 = y2*10 + in2.charAt(7)-48;
		y2 = y2*10 + in2.charAt(8)-48;
		y2 = y2*10 + in2.charAt(9)-48;

		System.out.printf("\ny1=%d, m1=%d, d1=%d; y2=%d, m2=%d, d2=%d;\n",y1,m1,d1,y2,m2,d2);
		int y,m,d,nod1=0,nod2=0;
		boolean leap=false;
		//leap = isLeap(y1);
		/*nod = nodinM(m1,isLeap(y1))-d1+1;
		for(m=m1+1;m<=12;m++)
			nod = nod + nodinM(m,isLeap(y1));
		nod = nod + d2;
		for(m=1;m<=m2-1;m++)
			nod = nod + nodinM(m,isLeap(y2));
		for(y=y1+1;y<=y2-1;y++)
		{
			leap = isLeap(y);
			for(m=1;m<=12;m++)
				nod = nod + nodinM(m,leap);
		}*/
		for(y=0;y<=y2-1;y++)
		{
			leap = isLeap(y);
			for(m=1;m<=12;m++)
				nod2 = nod2 + nodinM(m,leap);
		}
		for(m=1;m<=m2-1;m++)
			nod2 = nod2 + nodinM(m,isLeap(y2));
		nod2 = nod2 + d2;

		for(y=0;y<=y1-1;y++)
		{
			leap = isLeap(y);
			for(m=1;m<=12;m++)
				nod1 = nod1 + nodinM(m,leap);
		}
		for(m=1;m<=m1-1;m++)
			nod1 = nod1 + nodinM(m,isLeap(y1));
		nod1 = nod1 + d1;

		if(nod2<=nod1)
			return 0;
		else
			return nod2-nod1+1;
	}
	public static boolean isLeap(int y)
	{
		if /*(year is not exactly divisible by 4)*/ (y%4!=0) /*then (it is a common year)*/ return false;
		else
			if/* (year is not exactly divisible by 100)*/ (y%100!=0) /*then (it is a leap year)*/ return true;
				else
					if /*(year is not exactly divisible by 400)*/ (y%400!=0) /*then (it is a common year)*/ return false;
						else //(it is a leap year)
							return true;
	}
	public static int nodinM(int m,boolean leap)
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			return 31;
		else if(m==2)
			{
				if(leap==true)
					return 29;
				else
					return 28;
			}
			else
				return 30;
	}


}