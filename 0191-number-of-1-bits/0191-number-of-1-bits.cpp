class Solution {
public:
    int hammingWeight(int n) {
        int i=0;
        int c=0;
        while(i<32){
             long long  bit=(n>>i)&1;
             if(bit){
             c++;
             }
            
            i++;
        }

        return c;
    }
};