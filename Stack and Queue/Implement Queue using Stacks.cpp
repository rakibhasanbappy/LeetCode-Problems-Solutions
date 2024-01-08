// Problem Link: https://leetcode.com/problems/implement-queue-using-stacks/description/
// My Solution:
class MyQueue {
public:

    stack<int>mainStack;
    stack<int>helperStack;

    MyQueue() {
        
    }
    
    void push(int x) {
        mainStack.push(x);
    }
    
    int pop() {
        while(!mainStack.empty()){
            helperStack.push(mainStack.top());
            mainStack.pop();
        }
        int element = helperStack.top();
        helperStack.pop();

        while(!helperStack.empty()){
            mainStack.push(helperStack.top());
            helperStack.pop();
        }

        return element;
    }
    
    int peek() {
        while(!mainStack.empty()){
            helperStack.push(mainStack.top());
            mainStack.pop();
        }
        int element = helperStack.top();

        while(!helperStack.empty()){
            mainStack.push(helperStack.top());
            helperStack.pop();
        }

        return element;
    }
    
    bool empty() {
        return mainStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */