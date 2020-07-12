class Solution {
public:
    int maxProfit(vector<int>& price) {
        int n = price.size();
        if(n<=1)
            return 0;
        int minn = price[0];
        int maxprofit = 0;
        for(int i=1;i<n;i++)
        {
           maxprofit = max(maxprofit , price[i] - minn);
           minn = min(minn,price[i]);
        }

        return maxprofit;
    }
};
