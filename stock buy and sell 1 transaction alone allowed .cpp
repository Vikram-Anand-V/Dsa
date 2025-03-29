#include<bits/stdc++.h>
using namespace std;

int brute(vector<int>&arr)
{
    int n=arr.size();
    
    int maxprofit=0;
    for(int i=0;i<n;i++)
    {
        int cost=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
            cost=arr[j]-arr[i];
            maxprofit=max(maxprofit,cost);
            }
        }
    }

    return maxprofit;

}

int optimal(vector<int>&arr)
{
    int n=arr.size();
    int profit=0;
    int cost=0;
    int mini=arr[0];

    for(int i=1;i<n;i++)
    {
        cost=arr[i]-mini;
        profit=max(cost,profit);
    
        mini=min(arr[i],mini);

    }

    return profit;
}

int main()
{
    vector<int>arr={7,1,5,3,6,4};
    int max_profit=optimal(arr);
    cout<<max_profit<<endl;

    return 0;
}