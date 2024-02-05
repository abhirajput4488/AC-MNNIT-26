#include <bits/stdc++.h>
using namespace std;
long long dividePlayers(vector<int>& skill) {
        int start=0,end=skill.size()-1;
        long long sum=0;
        sort(skill.begin(),skill.end());
        long long chemistry=skill[start]+skill[end];
        while(start<end)
        {
            if((skill[start]+skill[end])==chemistry)
            {
                sum+=skill[start]*skill[end];
                start++;
                end--;
            }
            else
            return -1;
        }
        return sum;
    }