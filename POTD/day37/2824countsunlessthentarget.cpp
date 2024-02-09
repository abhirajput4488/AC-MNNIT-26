#include <bits/stdc++.h>
using namespace std;
    int countPairs(vector<int>& nums, int target) {
        int count=0;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
         while(i<j){
            int val = nums[i]+nums[j];
            if(val < target){
                count += j-i;
                   i++;
            }
            else{
            j--;
            }
         }
            return count;
    }
