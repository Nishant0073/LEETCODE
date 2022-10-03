class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int i=0;
        int ans = 0;
        while(i<n)
        {
            int tmp = i;
            int mx = 0;
            int sum = 0;
            while(i<n && colors[i]==colors[tmp])
            {
                mx = max(neededTime[i],mx);
                sum+=neededTime[i];
                i++;
            }
            if(i-1==tmp)
                continue;
            else
            {
             //   cout<<tmp<<" "<<sum<<" "<<mx<<" "<<i<<endl;
                ans+=(sum-mx);
            }
        }
        return ans;
    }
};