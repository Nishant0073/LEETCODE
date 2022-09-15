class Solution {
public:
    int reverse(int x) {
        long long  rev = 0;
        bool flag = false;
        if(x<0)
        {
            if(x<=INT_MIN)
                return 0;
            x = x*-1;
            flag = true;
        }
        while(x>0)
        {
             if(rev>=INT_MAX )
                return 0;
            rev = (rev*10) + (x%10);
           
            x/=10;
        }
          if(rev>INT_MAX)
            return 0;
        if(flag)
            rev = rev * -1;
      
        return rev;
        
    }
};