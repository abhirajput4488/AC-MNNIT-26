#include <bits/stdc++.h>
using namespace std;
#define ll long long

    int arrangeCoins(int n) {
        if (n <= 1)
            return n;
        ll start = 1;
        ll end = n - 1;
        while (start <= end) {
            ll mid = start + (end - start) / 2;
            ll coin = mid * (mid + 1) / 2;
            if (coin == n) {
                return mid;
            }
            if (coin < n) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return end;
    }
