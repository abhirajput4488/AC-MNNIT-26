#include <bits/stdc++.h>
using namespace std;
 int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0, j = 0, maxi = 0; // i for left and j for  right
        unordered_set<int> ans;

       // character is not in the set add it and move the right
        while (j < n) {
            if (ans.find(s[j]) == ans.end()) {
                ans.insert(s[j]);

                maxi = max(maxi, j - i + 1);
                j++;
                //character in the set remove character and move the left
            } else {
                ans.erase(s[i]);
                i++;
            }
        }
        return maxi;
    }