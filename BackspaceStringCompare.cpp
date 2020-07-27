class Solution {
public:
    bool backspaceCompare(string s, string t) {
      int k1=0,k2=0;
      for(int i=0;i<s.size();i++)
      {
          if(s[i]=='#')
          {
              k1-=1;
              k1 = max(0,k1);
          }
          else 
          {
              s[k1]=s[i];
              k1+=1;
          }
      }
      for(int i=0;i<t.size();i++)
      {
          if(t[i] == '#')
          {
              k2-=1;
              k2 = max(0,k2);
          }
          else
          {
              t[k2] = t[i];
              k2+=1;
          }
      }
      if(k1 != k2)
          return false;
      for(int i=0;i<k1;i++)
      {
          if(s[i] != t[i])
              return false;
      }
        return true;
    }
    
    
};
