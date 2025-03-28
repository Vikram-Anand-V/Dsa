#include<bits/stdc++.h>
using namespace std;

int brute(vector<int>&arr)
{
    //triple iteration T.C=>O(N^3)
    int n=arr.size();
    int maxi=INT_MIN;
for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {
        int sum=0;
        for(int k=i;k<j;k++)
        {
            sum+=arr[k];
        }
        maxi=max(maxi,sum);
    }
}

return maxi;
}


int better(vector<int>&arr)
{
    int n=arr.size();
    
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
{
    int sum=0;
    for(int j=i;j<n;j++)
    {
        sum+=arr[j];
        maxi=max(sum,maxi);
    }
    

}
return maxi;

}

int optimal(vector<int>&arr)
{
    //kadane's algorithm T.C=>O(N) 

    int n=arr.size();
    int sum=0;
    int maxi=INT_MIN;
    for(int i=1;i<n;i++)
    {
        sum+=arr[i];
        
        maxi=max(maxi,sum);
        
        if(sum<0)
        {
            sum=0;
        }

        

    }
return maxi;
}

int optimal_with_follow_up(vector<int>&arr)
{
    // implement kadanes algorithm and also find  an subarray which gives us the maximum sum 
    int n=arr.size();
    int sum=0;
    int maxi=INT_MIN;
    int ans_start=-1;
    int ans_end=-1;
    int start;
    for(int i=1;i<n;i++)
    {
        if(sum==0) start=i;

        sum+=arr[i];
        
        if(sum>maxi)
        {
            maxi=sum;
            ans_start=start;
            ans_end=i;
        }
        
        if(sum<0)
        {
            sum=0;
        }

        

    }
return maxi;
}
int main()
{
    vector<int>arr={-2,-3,4,-1,-2,1,5,-3};
    int max=optimal(arr);
    cout<<max<<endl;

    return 0;
}