#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        
    int i=0;

    for(int j=1;j<nums.size();j++)
    {
        if(nums[j]!=nums[i]) 
        {
            nums[i+1]=nums[j];
            i++;
        }
    }

    return i+1;

}


int main()
{
    vector<int >nums={1,2,2,3,3,3};
    removeDuplicates(nums);

    for(auto it:nums)
    {
        cout<<it<<" ";
    }

    return 0;
}