#include<bits/stdc++.h>
using namespace std;

int appearsonce(vector<int> &arr)
{
int xor1=0;

for(int i=0;i<arr.size();i++)
{
    xor1=xor1^arr[i];
}

return xor1;
}


int main()
{

    vector<int>v={0,0,1,1,2,3,3,4,2};
    int once=appearsonce(v);
    cout<<once;
    return 0;
}