//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int getPref(char ch)
    {
        int prf = 0;
        switch(ch){
        case '^':
            prf = 4;
            break;
        case '*':
        case '/':
            prf = 3;
            break;
        case '+':
        case '-':
            prf = 2;
            break;
        default:
            break;
        }
        return prf;
            
    }
    
    bool isOprand(char ch)
    {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            return true;
        return false;
    }
    string infixToPostfix(string s) {
        // Your code here
        stack<char> st;
        string ans = "";
        for(int i=0;i<s.size();i++)
        {
            if(isOprand(s[i]))
            {
                ans+=s[i];
            }
            else
            {
                if(s[i]=='(')
                {
                    st.push('(');
                }
                else if(s[i]==')')
                {
                    while(st.top()!='(')
                    {
                        ans+=st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else{
                    
                    while(!st.empty() && getPref(st.top())>=getPref(s[i]))
                    {
                            ans+=st.top();
                            st.pop();
                    }
                    st.push(s[i]);
                }
                
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends