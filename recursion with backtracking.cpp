#include<bits/stdc++.h>
using namespace std;


/*
Print numbers from 1 to n without the help of loops.
You only need to complete the function printNos() that takes n as a parameter and prints the number from 1 to n recursively.

*/


class Solution {
    public:
       int count=1;
      // Complete this function
      void printNos(int n) {
       if(n==0) return ;
       printNos(n-1);
       cout<<n<<" ";
          
      }
  };