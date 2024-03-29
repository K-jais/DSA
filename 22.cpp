class Solution {
public:
    vector<int> find(vector<int>ans,int x)
{
    int carry=0;
    vector<int>v;
    for(int i=0;i<ans.size();i++)
    {
        int val = x*ans[i];
        val = val+carry;
        v.push_back(val%10);
        carry=val/10;
    }
    while(carry)
    {
        v.push_back(carry%10);
        carry = carry/10;
    }
    
   return v;
}

    vector<int> factorial(int N){
        vector<int>ans;
        ans.push_back(1);
        if(N==0)
          return ans;
        for(int i=2;i<=N;i++)
        {
           ans= find(ans,i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
