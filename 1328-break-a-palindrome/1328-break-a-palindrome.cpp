class Solution {
public:
    string breakPalindrome(string palindrome) {
        int i = 0;
        int n  = palindrome.size();
        if(n==1)
            return "";
        for(i=0;i<(n/2);i++)
        {
            if(palindrome[i]!='a')
            {
                palindrome[i]='a';
                break;
            }
        }
        if(i==(n/2) && n%2==0)
        {
            if(palindrome[i]!='a')
            {
                palindrome[i] = 'a';
                return palindrome;
            }
            else
            {
                 palindrome[n-1] = 'b';
            }
        }
        else if(i==(n/2))
        {
            palindrome[n-1] = 'b';
        }
        return palindrome;
        
    }
};