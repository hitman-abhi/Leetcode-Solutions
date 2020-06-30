class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int k=0,i;
        for(i=0;i<nums.size();i++)
            k=k^nums[i];
        return k;

    }
};
