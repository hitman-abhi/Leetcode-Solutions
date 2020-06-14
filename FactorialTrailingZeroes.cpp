class Solution {
public:
    int trailingZeroes(int n) {
        long long int k=5,ans=0;
        while(n/k !=0)
        {
            ans += (n/k);
            k*=5;
        }
       return ans;
    }
};
