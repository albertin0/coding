import java.io.*;
import java.util.*;

public class Solution 
{
    private static String in="";
    //private static int ioE=-1;
    
    public static void push(String n)
    {
        in += n;
        //ioE++;
    }
    
    public static String pop()
    {
        if(in.length()==0)
            return null;
        else
        {
            String temp = in.substring(in.length()-1,in.length());//String.valueOf(in.charAt(ioE));
            ///in.charAt(ioE--) = null;
            //return (String.valueOf(in.charAt(ioE--)));
            in = in.substring(0,in.length()-1);
            return temp;
        }
    }
    public static String peek()
    {
        if(in.length()==0)
            return null;
        else
        {
            //return (String.valueOf(in.charAt(in.length()-1)));
            return in.substring(in.length()-1,in.length());
        }
    }
    public static void main(String[] args) 
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner inpI = new Scanner(System.in);
        Scanner inp = new Scanner(System.in);
        int i,j,n,flag;
        String inStr,temp,temp2;
        n = inpI.nextInt();
        for(i=0;i<n;i++)
        {
            inStr = inp.nextLine();
            flag = 1;
            for(j=0;j<inStr.length();j++)
            {
                System.out.println("Stack = "+in);
                temp = String.valueOf(inStr.charAt(j));
                //if(temp=="{" ||temp=="[" ||temp=="(" )
                if(temp.equals("{") || temp.equals("[") || temp.equals("("))
                {   
                    push(temp);
                    System.out.println("Stack = "+in);
                }
                else
                {
                    temp2 = peek();
                    //if(temp == "{" && temp2 == "}")
                    if(temp.equals("{") && temp2.equals("}"))
                        pop();
                    //else if(temp == "[" && temp2 == "]")
                    else if(temp.equals("[") && temp2.equals("]"))
                        pop();
                    //else if(temp == "(" && temp2 == ")")
                    else if(temp.equals("(") && temp2.equals(")"))
                        pop();
                    else
                    {
                        flag = 0;
                        break;
                    }
                    if(flag==0)
                        break;
                }
                if(flag==0)
                    break;
            }
            if(j==inStr.length())
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}