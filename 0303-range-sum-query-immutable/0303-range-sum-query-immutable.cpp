class SGT{
    vector<int> sgt;
    vector<int> arr;
    public:
    int n;
    SGT(vector<int> &nums)
    {
        n = nums.size();
        sgt = vector<int>(n*4,0);
        arr = nums;
        this->build(0,n-1,0);
    }
    void build(int l,int r,int v){
        if(l==r)
            sgt[v] = arr[l];
        else
        {
            int m = (l+r)/2;
            build(l,m,v*2+1);
            build(m+1,r,v*2+2);
            sgt[v] = sgt[v*2+1]+sgt[v*2+2];
        }
    }
    
    int getSum(int l,int r,int ql,int qr,int v)
    {
        if(l>qr || r<ql)
            return 0;
        if(ql<=l && r<=qr)
            return sgt[v];
        int m = (l+r)/2;
        
        return (getSum(l,m,ql,qr,v*2+1)+getSum(m+1,r,ql,qr,v*2+2));
        
    }
};
class NumArray {
public:
   SGT *sgt;
    NumArray(vector<int>& nums) {
      sgt = new SGT(nums);
    }
    

    
    int sumRange(int left, int right) {
        return sgt->getSum(0,sgt->n-1,left,right,0);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */