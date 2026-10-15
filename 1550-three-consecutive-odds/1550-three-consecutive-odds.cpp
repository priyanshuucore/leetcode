class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                c++;
            }else{
                c=0;
            }
            if(c==3){
                return true;
            }
        }
        return false;
    }
};