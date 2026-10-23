class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int open=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }else{
                open--;
            }
            if(open==0){
                ans+=s.substr(j+1,i-j-1);
                    j=i+1;
                }
            }
        return ans;
    }
};