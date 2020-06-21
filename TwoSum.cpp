class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int i,k;
        vector<int> ans;
        for(i=0;i<nums.size();i++)
        {
            k=target-nums[i];
            if(mp.find(k)!=mp.end())
            {
               ans = {mp[k],i};
                return ans;
            }
           mp[nums[i]] = i;
        }

       return ans;
    }
};
