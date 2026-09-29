class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int maxc=-1;
        int count=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                count++;
            }else{
            if(count==arr[i-1]){
                maxc=max(maxc,count);

            }
                count=1;
            }
            }
            if(count==arr[n-1]){
                maxc=max(maxc,count);
            }
        
        return maxc;
    }
};