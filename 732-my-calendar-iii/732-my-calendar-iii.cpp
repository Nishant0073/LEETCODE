class MyCalendarThree {
public:
    map<int,int>mp;
    int maxAns = 0;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int ongoing = 0;
        for(auto it:mp)
        {
            ongoing+=it.second;
            maxAns = max(maxAns,ongoing);
        }
        return maxAns;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */