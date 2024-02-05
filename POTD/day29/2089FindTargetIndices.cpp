#include <bits/stdc++.h>
using namespace std;
vector<int> targetIndices(vector<int>& nums, int target) {
         ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            ans.push_back(i);
        }
        return ans;
    }
