class MinStack {
public:
    stack<int> st;
    vector<int> mn;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(!mn.empty()){
            mn.push_back(min(mn.back(),val));
        }else{
            mn.push_back(val);      
        }
    }
    
    void pop() {
        st.pop();
        mn.pop_back();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.back();
    }
};
