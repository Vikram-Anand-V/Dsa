#include <bits/stdc++.h> 
using namespace std;

// better approach using prefix sum and hashmap  for array with positives and zeros  and best approach for array with positive ,negative and zeros 
// T.c 
int getLongestSubarray(vector<int>& nums, int k){
    
    int sum=0;

    map<int ,int> map1;

    int maxlen=0;

    for(int i=0;i<nums.size();i++)
    {
        sum=sum+nums[i];

        if(sum==k)
        {
            maxlen=i+1;

        }

        int rem=sum-k;

        if(map1.find(rem)!=map1.end())
        {
            int len=i-map1[rem];
            maxlen=max(maxlen,len);
        }

        if(map1.find(sum)==map1.end())
        {
            map1[sum]=i;
        }

        
    }

    return maxlen;


}

int getlongestsubarray_optimal(vector<int>&arr,int k)
{
int left=0;
int right=0;
int sum=arr[0];
int maxlen=0;
int n=arr.size();

while(right<n)
{
    while(left<=right &&sum>k)
    {
        sum=sum-arr[left];
        left++;
    }

    if(sum==k){
            maxlen=max(maxlen,(right-left)+1);
    }

    right++;
    if (right<n) 
    {
        sum=sum+arr[right];
    }
}
return maxlen;

}

int main()
{
    vector<int>v={1,2,3,1,1,1,1,0};
     int maxlen=getLongestSubarray(v,3);
  cout<<maxlen;
    return 0;
}