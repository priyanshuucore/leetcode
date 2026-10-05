class Solution {
public:
    int scoreOfParentheses(string s) {
        int d=0;
        int m=0;
        for(int  c=0;c<s.size();c++){
        if(s[c]=='(' ){
            d++;

        }else{
            d--;
          
        if(s[c-1]=='(') {
            m+=pow(2,d);
        }
        }
        }
        return m;
    }
};