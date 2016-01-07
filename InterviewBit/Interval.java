/*
//  Definition for an interval.
  public class Interval {
      int start;
      int end;
      Interval() { start = 0; end = 0; }
      Interval(int s, int e) { start = s; end = e; }
  }
 */
public class Solution {
    public ArrayList<Interval> insert(ArrayList<Interval> intervals, Interval newInterval)
    {
        ArrayList<Interval> sol = new ArrayList<Interval>();
        int size = intervals.size(),i,beg=0;
        boolean overlap = false;
        if(newInterval.start<=intervals.get(i).start)
        {
            beg = newInterval.start;    overlap = true;
        }
        for(i=0;i<size-1;i++)
        {
            if(!overlap)
            {
                if((newInterval.start>=intervals.get(i).start)&&(newInterval.start<=intervals.get(i).end))
                {
                    overlap = true;
                    beg = intervals.get(i).start;
                    if((newInterval.end>=intervals.get(i).end)&&(newInterval.end<intervals.get(i+1).start))
                    {
                        intervals.get(i).end = newInterval.end;
                        overlap = false;
                        sol.add(intervals.get(i));
                        
                    }
                }
                else
                    sol.add(intervals.get(i));
            }
            else
            {
                if(newInterval.end<=intervals.get(i).end)
                {
                    overlap = false;
                    intervals.get(i).start = beg;
                    sol.add(intervals.get(i));
                }
                else if(newInterval.end<intervals.get(i+1).start)
                {
                    overlap = false;
                    Interval in = new Interval(beg,newInterval.end);
                    sol.add(in);
                }
            }
        }
        if(overlap)
        {
            if(newInterval.end)
        }
        else
        
    return sol;
    }
    
}
