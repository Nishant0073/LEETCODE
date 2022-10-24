class Solution {
public:
    bool compare(string s,vector<bool> selected)
    {
        for(int i=0;i<s.size();i++)
        {
            if(selected[s[i]-'a'])
                return false;
            selected[s[i]-'a'] = true;
        }
        return true;
    }
    int getLength(int i,vector<string> &arr,vector<bool> selected,int len)
    {
        if(i>=arr.size())
            return len;
        
        string s = arr[i];
        
        if(compare(s,selected))
        {
            for(int i=0;i<s.size();i++)
                selected[s[i]-'a'] = true;
            len+=s.size();
            int n1 = getLength(i+1,arr,selected,len);
            
            len-=s.size();
            for(int i=0;i<s.size();i++)
                selected[s[i]-'a'] = false;
            int n2 = getLength(i+1,arr,selected,len);
            
            return max(n1,n2);
        }
        else
            return getLength(i+1,arr,selected,len);
        
        
    }
    int maxLength(vector<string>& arr) {
        
        vector<bool> selected(26);
        return getLength(0,arr,selected,0);
        
    }
};