#include <bits/stdc++.h>
using namespace std;
 int searchInsert(vector<int>& nums, int target) {
    //    int n=nums.size();
	// int low=0,high=n;
	// while(low<high){
	// 	int mid=low+(high-low)/2;
    //     if(nums[mid]==target)
    //     low=mid;
	// 	if(nums[mid]<target)
	// 	low=mid+1;
	// 	else
	// 	high=mid;
	// }
	// return low;
	
    // }
     int n=nums.size();
	int low=0,high=n-1,ind;
	while(low<=high){
		int mid=(high+low)/2;
        if(nums[mid]==target)
        return mid;
		if(nums[mid]<target){
		low=mid+1;
        ind=mid+1;
        }
		else{
		high=mid-1;
        ind=mid;
        }
	}
	return ind;
    }