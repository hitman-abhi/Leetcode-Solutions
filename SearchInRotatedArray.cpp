class Solution {
public:
    int search(vector<int>& a, int target) {
      int left=0,n=a.size(),right=n-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(a[mid]==target)
                return mid;
            else if(a[mid]<a[right])
            {
               if(target>a[mid] && target<=a[right])
                   left = mid+1;
               else
                   right = mid-1;
            }
            else
            {
                if(a[left]<=target && target<a[mid])
                    right = mid-1;
                else
                    left = mid+1;
            }
        }
        return -1;
    }
};
