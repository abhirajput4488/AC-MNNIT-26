#include <bits/stdc++.h>
using namespace std;
 vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int> odd;
        vector<int> even;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
         int k=0;
         int l=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans.push_back(even[k]);
                k++;
            }
            else{
                ans.push_back(odd[l]);
                l++;
            }
        }
        return ans;
    }