class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int b=*max_element(nums.begin(),nums.end());
        int a=*min_element(nums.begin(),nums.end());
        vector<int>miss;
        int n=b-a;
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int i=a;
        while(i<b){
            if(!mp.count(i)){
                 miss.push_back(i);
            }
            i++;
        }
        return miss;
    }

};