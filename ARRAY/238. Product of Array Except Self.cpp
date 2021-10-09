//beffire going to solution you must try the problem atleast ones.


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n);
        vector<int>suf(n);
        
        pre[0]=nums[0];
        suf[n-1]=nums[n-1];
        
        for(int i=1;i<n;i++)
            pre[i]=pre[i-1]*nums[i];
        for(int i=n-2;i>=0;i--)
            suf[i]=suf[i+1]*nums[i];
        
        vector<int>res(n);
        
        for(int i=0;i<n;i++)
        {
          if(i==0)
          {
              res[i]=suf[i+1];
          }
            else if(i==n-1)
            {
                res[i]=pre[i-1];
            }
            else
            {
                res[i]=pre[i-1]*suf[i+1];
            }
        }
        
        return res;
    }
};

problem link: https://leetcode.com/problems/product-of-array-except-self/
