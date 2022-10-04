class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i=0;
        int num = 0;
         bool isng = false;
        while(i<n && s[i]==' ')
            i++;
        if(i<n && (s[i]=='-' || s[i]== '+' || s[i]>='0' && s[i]<='9'))
        {
           
            if((s[i]=='-' || s[i]=='+'))
            {
                if(s[i]=='-')
                    isng = true;
                i++;
            }
            while(i<n && s[i]>='0' && s[i]<='9')
            {
                 if(num>(INT_MAX-(s[i]-'0'))/10)
                {
                    if(isng)
                    {
                        return INT_MIN;
                    }
                    return (INT_MAX);
                }
               num = (num*10+(s[i++]-'0')) ;
            }
        }
        
            if(isng)
                num*=-1;
            return num;
    }
};