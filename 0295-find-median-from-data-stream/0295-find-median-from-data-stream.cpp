class MedianFinder {
public:
    priority_queue<int> mx;
    priority_queue<int,vector<int>,greater<int>> mn;
    
    MedianFinder() {
    }
    
    void addNum(int num) {
        if(mx.empty() || mx.top()>num)
            mx.push(num);
        else
            mn.push(num);
        if(mn.size()>mx.size()+1)
        {
            mx.push(mn.top());
            mn.pop();
        }
        else if(mx.size()>mn.size()+1)
        {
            mn.push(mx.top());
            mx.pop();
        }
       
    }
    
    double findMedian() {
        int n = mn.size();
        int m = mx.size();
       if(m==n)
         return (double(mn.top())+mx.top())/2;
        else
        {
            return mn.size()>mx.size() ? mn.top() :mx.top();
        }
         
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */