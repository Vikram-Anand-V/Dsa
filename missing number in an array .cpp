#include<bits/stdc++.h>
using namespace std;


// for array with {0,......N}
int missingNumber(vector<int>& nums) {
        
    int xor1=0;
    int xor2=0;

    for(int i =0;i<nums.size();i++)
    {
        xor2=xor2^nums[i];
        xor1=xor1^(i);
    }
    xor1=xor1^nums.size();

    int missing=xor1^xor2;

    return missing;
    
}


 // for array with {1,......N}  

   int missingNumber(vector<int>& arr) {
     
     
    int xor1 = 0;
    int xor2 = 0;

   for (int i = 0; i < arr.size(); i++) 
   {
       xor2 = xor2 ^ arr[i]; 
       xor1 = xor1 ^ (i+1); 
   }
   xor1 = xor1 ^ arr.size()+1; 

   return (xor1 ^ xor2);
   }