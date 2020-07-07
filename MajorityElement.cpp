class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,k;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                count+=1;
                k = nums[i];
            }
            else if(k == nums[i])
            {
                count +=1;
            }
            else
            {
                count -=1;
            }
        }
        return k;
    }
};
