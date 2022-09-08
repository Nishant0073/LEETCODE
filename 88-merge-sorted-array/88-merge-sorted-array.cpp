class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)
            return;
        if(m==0)
        {
            nums1 = nums2;
            return;
        }
        int i=0,j=0;
        while(i<m  )
        {
            if(nums1[i]>nums2[0])
            {
                swap(nums1[i],nums2[0]);
                int tmp = nums2[0];
                int k=1;
                while(k<n && nums2[k]<tmp)
                {
                    nums2[k-1] = nums2[k];
                    k++;
                }
                nums2[k-1] = tmp;
            }
                i++;
        }
        
        while(  j<n)
            nums1[i++]=nums2[j++];
        return;
    }
};