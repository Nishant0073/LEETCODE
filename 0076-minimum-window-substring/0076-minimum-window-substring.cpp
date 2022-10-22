class Solution {
public:
    string minWindow(string s, string t) {
        int cnt = t.size();
        map<char,int> cmp;
        map<char,bool>pmp;
        for(auto it:t)
        {
            cmp[it]++;
            pmp[it] = true;
            
        }
        int n = s.size();
        int l=0,r=0;
        while(r<n && cnt!=0)
        {
             if(pmp[s[r]])
             {
                 cmp[s[r]]--;
                 if(cmp[s[r]]>=0)
                 {
                     cnt--;
                 }
             }
             r++;
        }
        if(cnt!=0)
            return "";
        int deff = (r-l);
        pair<int,int> p = {l,r};
        
        while(l<r && r<n)
        {
           while(l<r && (!pmp[s[l]] || (pmp[s[l]] && cmp[s[l]]<0)))
           {
               if(pmp[s[l]])
                   cmp[s[l]]++;
               l++;
           }
          //  cout<<l<<" "<<r<<endl;
            if((r-l)<deff)
            {
                deff = (r-l);
                p = {l,r};
            }
           if(r<n && pmp[s[r]])
               cmp[s[r]]--;
           r++; 
        }
        
         while(l<r && (!pmp[s[l]] || (pmp[s[l]] && cmp[s[l]]<0)))
           {
               if(pmp[s[l]])
                   cmp[s[l]]++;
               l++;
           }
          //  cout<<l<<" "<<r<<endl;
            if((r-l)<deff)
            {
                deff = (r-l);
                p = {l,r};
            }
        
        
        
        string ans = "";
        for(int i=p.first;i<p.second;i++)
            ans+=s[i];
        
        return ans;
    }
};