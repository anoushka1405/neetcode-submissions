class MinStack {
public:
    stack<int>stack1;
    stack<int>stack2;
    MinStack() {
        
    }
    
    void push(int val) {
        stack1.push(val);
        if(stack2.empty()||stack2.top()>=val){
            stack2.push(val);
        }
        
    }
    
    void pop() {
        if(stack1.top()==stack2.top()){
            stack2.pop();
        }
        stack1.pop();
        
    }
    
    int top() {
        return stack1.top();
        
    }
    
    int getMin() {
        return stack2.top();
        
    }
};
