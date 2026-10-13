class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        long long square=0;

       for(int i=0;i<n;i++){
        nums[i]=nums[i]*nums[i];

       }
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
        if(i<n/2){
            square-=nums[i];
        }else{
            square+=nums[i];
        }
       }

        return square;
    }
};