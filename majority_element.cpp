#include<bits/stdc++.h>
using namespace std ;

int brute(vector<int>&arr)
{
    // uses double iteration  T.C=>O(n^2)
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i]) count+=1;
        }
        if(count>n/2) return arr[i];
    }
}

int better(vector<int>&arr)
{
    //uses hashing hashmap T.C=>O(2n) S.C=> O(N log N +N)
     map<int,int>map1;
    int n=arr.size();

    for(int i=0;i<n;i++)
    {
        map1[arr[i]]++;
    }

    for(auto it:map1)
    {
        if(it.second>(n/2)) return it.first;
    }
}

int optimal(vector<int>&arr)
{
    // using moore's voting algorithm T.C=>O(2N) S.C=>O(1)

    int n=arr.size();
    int element;
    int count=0;

    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            count=1;
            element=arr[i];
        }

        else if(arr[i]==element)
        {
            count+=1;
        }

        else
        {
            count--;

        }
    }

    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element) count+=1;

    }

    if(count>(n/2)) return element;
    
    else return -1;

}

int main()
{
    vector<int>arr={1,2,3,2,2,3,2};

    int majority=optimal(arr);
    cout<<majority<<endl;
    return 0;
}