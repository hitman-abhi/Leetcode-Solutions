class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> temp;
        find(nums,temp,ans,0);

        return ans;
    }

    void find(vector<int> &nums,vector<int> temp,vector<vector<int> > &ans,int i)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        find(nums,temp,ans,i+1);// Not take it
        temp.push_back(nums[i]);
        find(nums,temp,ans,i+1);// Take it

        return ;
    }
};
