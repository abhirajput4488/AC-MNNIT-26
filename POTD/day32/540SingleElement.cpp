#include <bits/stdc++.h>
using namespace std;
 int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        int mid;
        if (n == 1 || nums[0] != nums[1])
            return nums[0];
        while (start <= end) {
             mid = end + (start - end) / 2;
            if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1])
                return nums[mid];
            if (mid % 2 == 0) {
                if (nums[mid] != nums[mid + 1])
                    end = mid - 1;
                else
                    start = mid + 1;
            } else {
                if (nums[mid] != nums[mid - 1])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
        }
        return nums[mid];
    }