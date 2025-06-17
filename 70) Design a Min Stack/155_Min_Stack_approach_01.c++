# include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<pair<int, int>> s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val, val});
        }else{
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
        
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main(){
    MinStack m;
    m.push(-2);
    m.push(0);
    m.push(-3);

    cout<<m.getMin()<<endl;
    m.pop();
    cout<<m.top()<<endl;
    cout<<m.getMin()<<endl;
    return 0;
}