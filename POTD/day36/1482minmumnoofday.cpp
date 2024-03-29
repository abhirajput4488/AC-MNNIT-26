#include<bits/stdc++.h>
using namespace std;

    int minDays(vector<int>& bloomDay, int m, int k) {
       int a=bloomDay.size();
       long long s=1ll*m*1ll*k;
        if(a<s)
        return -1;

    //     int mini = INT_MAX, maxi = INT_MIN;
    //    for (int i = 0; i < a; i++) {
    //     mini = min(mini, bloomDay[i]);
    //     maxi = max(maxi, bloomDay[i]);
    //    }
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
    while (low <= high) {
        int mid = (low + high) / 2;
        if (possible(bloomDay, mid, m, k)) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return low;
    //    long long s=1ll*m*1ll*k;
    //    if(a<s)
    //    return -1;
    //    int mini = INT_MAX, maxi = INT_MIN;
    //    for (int i = 0; i < a; i++) {
    //     mini = min(mini, bloomDay[i]);
    //     maxi = max(maxi, bloomDay[i]);
    // }
    //  for (int i = mini; i <= maxi; i++) {
    //     if (possible(bloomDay, i, m, k))
    //         return i;
    // }
    // return -1;
    }
    bool possible(vector<int>&arr,int day,int m,int k){
        int count=0;
        int bueq=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]<=day){
                count++;
            }
            else{
                bueq+=(count/k);
                count=0;
            }
        }
        bueq+=(count/k);
        if(bueq>=m)
        return true;
        else
        return false;
    }
