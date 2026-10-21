class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string c:tokens){
            if(c=="+" || c=="-" || c=="*"|| c=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(c=="+"){ 
                    st.push(a+b);
                }else if(c=="-"){
                    st.push(b-a);
                }else if(c=="*"){
                    st.push(b*a);
                }else{
                    st.push(b/a);
                }
            }
            else{
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};