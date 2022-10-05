class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>> mpq;
    int hplen = 0;
    KthLargest(int k, vector<int>& nums) {
        for(auto it:nums)
            mpq.push(it);
        hplen = k;
        while(mpq.size()>k)
            mpq.pop();
    }
    
    int add(int val) {
        if(mpq.size()<hplen)
            mpq.push(val);
        else
        {
            if(mpq.top()<val)
            {
                mpq.pop();
                mpq.push(val);
            }
        }
        return mpq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */