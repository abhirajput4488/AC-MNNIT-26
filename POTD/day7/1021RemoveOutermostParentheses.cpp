#include <bits/stdc++.h>
using namespace std;
 string removeOuterParentheses(string s) {
       string r;
       int a=0;
       for(char c : s) {
           if((c == '(' && a++ > 0)||(c == ')' && a-- > 1))
           r+=c;
       }
       return r;
    }