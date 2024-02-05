#include <bits/stdc++.h>
using namespace std;
long long Sum(int nums){
        long long ans=0;
        while(nums>0){
            int last=nums%10;
            ans+=last*last;
            nums/=10;
        }
    return ans;
    }
     bool isHappy(int n) {
         int fi=n;

       while(n!=1)
       {
            fi=Sum(fi);
           if(fi==1)
           return 1;
           else if(fi==4)
           return 0;
       }
       return 1;
    }