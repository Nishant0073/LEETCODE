class Solution {
public:
    string intToRoman(int num) {
        string roman[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int      nums[] = { 1 , 4  , 5 ,  9 , 10, 40 , 50, 90, 100, 400, 500,900,1000};
        
        string ans = "";
        int i=12;
        while(num>0)
        {
            while(num/nums[i]<=0)
                i--;
            ans += roman[i];
            num = num-nums[i];
        }
        return ans;
    }
};