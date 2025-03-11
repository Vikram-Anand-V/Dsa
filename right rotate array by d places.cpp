#include<bits/stdc++.h>
using namespace std;

void right_rotate(vector<int>&nums,int d)
{
    int n=nums.size();
    d=d%n;

    if(d==0) return ;
  
    
    reverse(nums.begin()+d,nums.end());
    reverse(nums.begin(),nums.begin()+d);
    reverse(nums.begin(),nums.end());

}

int main()
{
    vector<int>nums={1,2,3,4,5,6,7};
    int d=5;

    right_rotate(nums,d);
     
    for(auto it:nums)
    {
        cout<<it<<" ";
    }
    return 0;
}