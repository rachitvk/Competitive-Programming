/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> intervalIntersection(vector<Interval>& A, vector<Interval>& B) {
        
        int i=0;
        int j=0;
        
        vector<Interval>ans;
        
        while(i<A.size() && j<B.size()){
           int l=max(A[i].start,B[j].start);
           int r=min(A[i].end,B[j].end);
            
            if(l<=r)
                ans.push_back(Interval(l,r));
            
            if(A[i].end < B[j].end)
                i++;
            else
                j++;
        }
        
        return ans;
        
    }
};