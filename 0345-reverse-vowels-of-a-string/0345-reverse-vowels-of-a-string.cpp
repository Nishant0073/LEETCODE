class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        map<char,bool> alp;
        alp['a'] = true;
        alp['e'] = true;
        alp['i'] = true;
        alp['o'] = true;
        alp['u'] = true;
        
        alp['A'] = true;
        alp['E'] = true;
        alp['I'] = true;
        alp['O'] = true;
        alp['U'] = true;
        while(i<j)
        {
            if(alp[s[i]] && alp[s[j]])
            {
                swap(s[i],s[j]);
                i++,j--;
            }
            else if(alp[s[i]] && !alp[s[j]])
                j--;
            else if(!alp[s[i]] && alp[s[j]])
                i++;
            else
                i++,j--;
        }
        return s;
    }
};