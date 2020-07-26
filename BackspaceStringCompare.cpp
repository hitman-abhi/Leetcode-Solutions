class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string a = get(S);
        string b = get(T);

        return a==b;
    }

    string get(string s)
    {
      string ans ;
      int n = s.size(),count=0;
      for(int i=n-1;i>=0;i--)
      {
          if(s[i] == '#'){
              count += 1;
          }
          else {
              if(count>0)
              {
                  count -= 1;
              }
              else
              {
                  ans += s[i];
              }
          }
      }
      reverse(ans.begin(),ans.end());
        return ans;
    }
};
