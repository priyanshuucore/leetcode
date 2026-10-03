class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int n=candies.size();
        int maxc=0;
        for(int i=0;i<n;i++){
            maxc=max(candies[i],maxc);
        }
        for(int i=0;i<n;i++){
            int sum=candies[i]+extraCandies;
            if(sum>=maxc){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};