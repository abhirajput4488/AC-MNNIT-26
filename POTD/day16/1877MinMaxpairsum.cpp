#include <bits/stdc++.h>
using namespace std;
int minPairSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int k = nums.size()-1;
        int ans=0;
        for(int i=0;i<k;i++)
        {
            ans=max(ans,nums[i]+nums[k-i]);
        } 
        return ans;
}