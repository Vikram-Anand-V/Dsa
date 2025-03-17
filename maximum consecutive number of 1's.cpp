#include<bits/stdc++.h>
using namespace std;

int max_1s(vector<int>&arr)
{
int count=0;
int max=0;

for(int i=0;i<arr.size();i++)
{
    if(arr[i]==1)
    {
        count+=1;

    }

    else{
        if(max<count)
        {
            max=count;
            
        }

        count=0;
    }
}

if(max>count)
{
    return max;
} 

else 
{
    return count;
}

}


int main()
{
    vector<int>arr={1,1,0,0,1,1,1,0,0,1};
    int result=max_1s(arr);
    cout<<result;

    return 0;
}