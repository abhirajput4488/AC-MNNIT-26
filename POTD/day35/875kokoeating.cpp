#include <bits/stdc++.h>
using namespace std;
long long fun(vector<int> &nums,double k){
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=ceil(nums[i]/k);//ceil means smallest integer greater than or equal ex ceil(4.3)=5
        }
        return ans;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        long long ak=0;
      long long start=1,end=*max_element(piles.begin(),piles.end());
        while(start<=end){
            long long mid=start+(end-start)/2;
            long long j=fun(piles,mid);
            if(j<=h){
                ak=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ak;
    }