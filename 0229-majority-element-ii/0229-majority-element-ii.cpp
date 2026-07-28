class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int f=floor((double)n/3);
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        vector<int>ans;
        for(auto &it:freq){
            if(it.second>f){
            ans.push_back(it.first);
            }
        }
        return ans;
    }
};