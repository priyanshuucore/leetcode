class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
       sort(nums.begin(), nums.end(), greater<>());
        for(int i=0;i<nums.size()&& ans.size()<k;i++){
            if(i==0||nums[i]!=nums[i-1]){
                ans.push_back(nums[i]);

            }
        }
       
        return ans;
        
    }
};