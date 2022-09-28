class Solution {
public:
    void merge(vector<int>&nums,int l,int m,int r,int &cnt)
    {
        int j=m+1;
        for(int i=l;i<=m;i++)
        {
            while(j<=r && (nums[i])>(2LL*nums[j]))
                j++;
            cnt+=(j-(m+1));
        }
        
        int n1 = (m-l)+1;
        int n2 = (r-m);
        int arr1[n1],arr2[n2];
        for(int i=0;i<n1;i++)
            arr1[i] = nums[i+l];
        for(int i=0;i<n2;i++)
            arr2[i] = nums[m+1+i];
        
        int i=0,k=l;
        j=0;
        while(i<n1 && j<n2)
        {
            if(arr1[i]>arr2[j])
                nums[k++] = arr2[j++];
            else
                nums[k++] = arr1[i++];
        }
        while(i<n1)
            nums[k++] = arr1[i++];
        while(j<n2)
            nums[k++] = arr2[j++];
    }
    void divide(vector<int>&nums,int l,int r,int &cnt)
    {
        while(l<r)
        {
            int m = (l+r)/2;
            divide(nums,l,m,cnt);
            divide(nums,m+1,r,cnt);
            merge(nums,l,m,r,cnt);
            return;
        }
        return;
    }
    int reversePairs(vector<int>& nums) {
        int cnt = 0;
        divide(nums,0,nums.size()-1,cnt);
        return cnt;
    }
};