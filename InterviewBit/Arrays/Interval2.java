/**
 * Definition for an interval.
 * public class Interval {
 *     int start;
 *     int end;
 *     Interval() { start = 0; end = 0; }
 *     Interval(int s, int e) { start = s; end = e; }
 * }
 */
public class Solution {
    public ArrayList<Interval> merge(ArrayList<Interval> intervals) {
        Interval temp;
        ArrayList<Interval> res = new ArrayList<Interval>();
        int i,size,uplim,lowlim;
        size = intervals.size();
        temp = new Interval();
        temp.start = intervals.get(0).start;
        lowlim = intervals.get(0).end;
        for(i=1;i<size;i++) {
            uplim = intervals.get(i).start;
            if(uplim<=lowlim)   {
                lowlim = intervals.get(i).end;
                continue;
            }
            else    {
                temp.end = lowlim;
                res.add(temp);
                temp = new Interval();
                temp.start = uplim;
                lowlim = intervals.get(i).end;
            }
        }
        temp.end = intervals.get(i-1).end;
        res.add(temp);
        return res;
    }
}