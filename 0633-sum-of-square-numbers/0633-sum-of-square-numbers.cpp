class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0;
        long long j=sqrt(c);
        while(i<=j){
            if(c==1){
                return true;
            }
            if((i*i)+(j*j)>c){
                j--;

            }else if((i*i)+(j*j)<c){
                i++;
            }else{
                return true;
            }

        }
        return false;
    }
};