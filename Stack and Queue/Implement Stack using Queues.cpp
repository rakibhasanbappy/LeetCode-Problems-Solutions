// Problem Link: https://leetcode.com/problems/implement-stack-using-queues/description/

// My Solution:
class MyStack {
private:
    queue<int>mainQueue;
    queue<int>helperQueue;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        mainQueue.push(x);
    }
    
    int pop() {
        int n = mainQueue.size();
        for(int i=0;i<n-1;i++){
            helperQueue.push(mainQueue.front());
            mainQueue.pop();
        }
        int element = mainQueue.front();
        mainQueue.pop();

        while(!helperQueue.empty()){
            mainQueue.push(helperQueue.front());
            helperQueue.pop();
        }

        return element;
    }
    
    int top() {
        int n = mainQueue.size();
        for(int i=0;i<n-1;i++){
            helperQueue.push(mainQueue.front());
            mainQueue.pop();
        }
        int element = mainQueue.front();
        helperQueue.push(mainQueue.front());
        mainQueue.pop();

        while(!helperQueue.empty()){
            mainQueue.push(helperQueue.front());
            helperQueue.pop();
        }

        return element;
    }
    
    bool empty() {
        return mainQueue.empty();
    }
};


// Follow Up Question: Solution using only one queue:
class MyStack {
private:
    queue<int>mainQueue;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        mainQueue.push(x);
    }
    
    int pop() {
        int n = mainQueue.size();
        for(int i=0;i<n-1;i++){
            mainQueue.push(mainQueue.front());
            mainQueue.pop();
        }
        int element = mainQueue.front();
        mainQueue.pop();

        return element;
    }
    
    int top() {
        int n = mainQueue.size();
        for(int i=0;i<n-1;i++){
            mainQueue.push(mainQueue.front());
            mainQueue.pop();
        }
        int element = mainQueue.front();
        mainQueue.push(mainQueue.front());
        mainQueue.pop();

        return element;
    }
    
    bool empty() {
        return mainQueue.empty();
    }
};