#include <bits/stdc++.h>
using namespace std;
int minCost(string colors, vector<int>& neededTime) {

        int time = 0;
        for (int i = 0; i < colors.length(); i++) {
            char cur = colors[i];
            char next = colors[i + 1];
            if (cur == next) {
                time += min(neededTime[i], neededTime[i + 1]);
                neededTime[i + 1] = max(neededTime[i], neededTime[i + 1]);
            }
        }
        return time;
    }