class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int n1=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int a=nums1[n-1];
        int b=nums2[n1-1];
        int x=b-a;
        return x;
        
    }
};