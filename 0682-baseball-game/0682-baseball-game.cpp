class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(operations[i]=="C"){
                st.pop();
            }else if(operations[i]=="D"){
                int a=st.top();
                st.push(2*a);
            }else if(operations[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }else{
                st.push(stoi(operations[i]));
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

       return ans;
    
    }
};