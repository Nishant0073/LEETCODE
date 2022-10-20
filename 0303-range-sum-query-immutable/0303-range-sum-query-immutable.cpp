class NumArray {
public:
    int n ;
    vector<int> t;
    void build(vector<int> &nums,vector<int> &t,int l,int r,int v)
    {
        if(l>r)
            return;
        if(l==r)
        {
            t[v] = nums[l];
        }
        else{
            int m = (l+r)/2;
            build(nums,t,l,m,v*2+1);
            build(nums,t,m+1,r,v*2+2);
            t[v] = t[v*2+1]+t[v*2+2];
        }

    }
    NumArray(vector<int>& nums) {
       n = nums.size();
        vector<int> tmp(n*4,0);
        t = tmp;
        build(nums,t,0,n-1,0);
    }
    
    int getSum(vector<int> &t,int l,int r,int ql,int qr,int v)
    {
        if(ql>r || qr<l)
            return 0;
        if(ql<=l && r<=qr)
            return t[v];
        int m = (l+r)/2;
        
        return (getSum(t,l,m,ql,qr,v*2+1)+getSum(t,m+1,r,ql,qr,v*2+2));
    }
    
    int sumRange(int left, int right) {
        //return 0;
        return getSum(t,0,n-1,left,right,0);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */