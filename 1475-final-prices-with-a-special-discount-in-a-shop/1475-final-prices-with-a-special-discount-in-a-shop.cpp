class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>ans;
        bool f=false;
        for(int i=0;i<n;i++){
            bool f=false;
            for(int j=i+1;j<n;j++){
                if(prices[j]<=prices[i]){
                    ans.push_back(prices[i]-prices[j]);
                    f=true;
                    break;
                }
            }if(!f){
                ans.push_back(prices[i]);

            }
        }
        return ans;
    }
};