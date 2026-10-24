class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        while(low<=high){
                if(low % 2!=0){
                  low+=2;
                  count++;
        }else{
            low+=1;
        }
        }
        return count;
    }
};