#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int a=0;
        for(int i=0; i<n;i++){
            a=a^i^nums[i];
        }
        a^=n;
        return a;
    }