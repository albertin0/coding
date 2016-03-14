public class FLIP {
    public ArrayList<Integer> flip(String A) {
        int i,j,size,opt,Ml=0,Mr=0,Mopt;
        size = A.length();
        Mopt = opt = 0;
        if(A.charAt(0)=='0')    {
            opt = 0;
            for(j=0;j<size&&opt>=0;j++) {
                if(A.charAt(j)=='0')    {
                    opt++;
                    if(opt>Mopt)    {
                        Ml = 0; Mr = j; Mopt = opt;
                    }
                }
                else
                    opt--;
            }
        }
        for(i=1;i<size;i++) {
            if(A.charAt(i)=='0' && A.charAt(i-1)=='1')    {
                opt = 0;
                for(j=i;j<size&&opt>=0;j++) {
                    if(A.charAt(j)=='0')    {
                        opt++;
                        if(opt>Mopt)    {
                            Ml = i; Mr = j; Mopt = opt;
                        }
                    }
                    else
                        opt--;
                }
            }
        }
        ArrayList<Integer> ans = new ArrayList<Integer>();
        if(Mopt>0)  {
        ans.add(Ml+1);    ans.add(Mr+1);
        }
        return ans;
    }
}