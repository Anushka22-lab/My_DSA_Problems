class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int n=nums.size();
        /*Brute force
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                maxi=max(maxi,(nums[i]-1)*(nums[j]-1));
            }
        }*/
        sort(nums.begin(),nums.end());
        int a=nums[n-1];
        int b=nums[n-2];
        return (a-1)*(b-1);
        
    }
};