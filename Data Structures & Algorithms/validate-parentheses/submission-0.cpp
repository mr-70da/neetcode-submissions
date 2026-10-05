class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    for(auto c : s){
        if (c == '(' ||c == '[' ||c == '{'){
            st.push(c);
        }else{
            if(!st.empty()){
                if((c == ')' && st.top() =='(') or c == '}' && st.top() =='{' or
                 c == ']' && st.top() =='[')
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }else{
                return false;
            }
        }

    }return st.empty();
}
};
