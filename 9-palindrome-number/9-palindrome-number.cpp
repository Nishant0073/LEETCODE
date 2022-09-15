class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
           return false;
        int tmp1 = 0;
        int tmp2 = x;
        while(tmp2>0)
        {
            if(tmp1>(INT_MAX/10))
                return false;
            
            tmp1 = (tmp1*10) + (tmp2%10);
            tmp2=tmp2/10;
        }
        return x==tmp1;
    }
};