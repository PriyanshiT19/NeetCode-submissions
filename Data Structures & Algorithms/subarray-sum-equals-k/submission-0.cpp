class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> prefix;
        prefix.resize(nums.size());
        prefix[0] = nums[0];
        mp[0] = 1;
        int c=0;
        for(int i=1;i<nums.size();i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        for(int j=0; j<nums.size();j++){
            int need = prefix[j] - k;
            if(mp.find(need)!= mp.end()){
                c+= mp[need];
            }
            mp[prefix[j]]++;
        }
        return c;
    }
};