#include <bits/stdc++.h>
using namespace std;
vector<int>sortArrayByParity(vector<int>& nums) {
        vector<int>a;
        for (int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                a.push_back(nums[i]); 
        }
        for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]%2==1) 
        a.push_back(nums[i]);
    }
        return a;
    }