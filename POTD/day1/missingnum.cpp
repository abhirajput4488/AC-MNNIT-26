#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
        int n = nums.size();
       int a=n*(n+1)/2;
       int sum = 0;
        for(int i : nums){
            sum+=i;
        }
        return (a-sum);
    }