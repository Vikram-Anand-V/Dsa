#include<bits/stdc++.h>
using namespace std;

//variety 1 - return true if solution exists or false

// VAriety 2 - return indices if solution exists or {-1,-1}

//brute approach using double iteration

int brute(vector<int>&v,int target)
{
for(int i=0;i<v.size();i++)
{
    for(int j=i+1;j<n;j++)
    {
    
     if(v[i]+v[j]==target)
     {
       return {i,j};
     }
    
    }
}

return {-1,-1};

}


//better approach using hashing 

vector<int> better(vector<int>& nums, int target) {
        
    map<int,int>map1;
    int n=nums.size();

    for(int i=0;i<n;i++)
    {
        int num=nums[i];
        int rem=target-num;
        if(map1.find(rem)!=map1.end())
        {
            return {map1[rem],i};
        }

        map1[num]=i;
    }

    return {-1,-1};
}

//Optimal approach - sorting and single traversal greedy approach   
//note :this works best for variety 1 but not for variety 2(the better approach is the best for variety 2)

vector<int> better(vector<int>&arr,int target)
{
    sort(arr.begin(),arr.end());

    int left=0;
    int right=arr.size()-1;

    while(left<right)
    {
        if(arr[left]+arr[right]==target)
        {
            return true;
        }

        else if(arr[left]+arr[right]>target)
        {
            right-=1;
        }

        else   
        {
            left+=1;
        }
    }
    return false;
    

}


int main()
{
    vector<int>v={2,2,8,5,8,11};
    
    pair<int,int>p;
    p=better(v,14);
    cout<<p.first<<" "<<p.second<<endl;
}