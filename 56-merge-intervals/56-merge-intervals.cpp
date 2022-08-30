class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>intv;
        sort(intervals.begin(),intervals.end());
        
        intv.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(intv.back()[1]>=intervals[i][0])
                intv[intv.size()-1][1] = max(intervals[i][1],intv[intv.size()-1][1]);
            else
                intv.push_back(intervals[i]);
        }
        return intv;
    }
};