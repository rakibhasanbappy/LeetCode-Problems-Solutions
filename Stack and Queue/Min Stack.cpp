// Problem Link: https://leetcode.com/problems/min-stack/description/
// My Solution:
class MinStack {
public:

    stack<int>s,s2;

    MinStack() {

    }
    
    void push(int val) {
        s.push(val);

        if(s2.empty() || val<=getMin()) s2.push(val);
    }
    
    void pop() {
        if(s.top() == getMin()) s2.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return s2.top();
    }
};

// Another Solution using only one stack
// https://leetcode.com/problems/min-stack/solutions/1209254/c-simple-code-with-one-stack/
// Many of them suggest to not use STL stack to iplement these stack operations.