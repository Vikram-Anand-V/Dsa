#include<bits/stdc++.h>
using namespace std;


// multiple recursion call

class Solution {
    public:
        int fib(int n) {
            
            if(n<=1) return n; 
    
            int last=fib(n-1);
            int slast=fib(n-2);
    
            return last+slast;
        }
    };