bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int k = INT_MIN ,res = 0;
        for(int i =0;i<intervals.size();i++){
            int x = intervals[i][0];
            int y = intervals[i][1];
            if(x>=k){
                k = y;
                res++;
            }
            // else res++;
            
        }
        return intervals.size()- res;
    }
};