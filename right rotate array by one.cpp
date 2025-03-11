#include<bits/stdc++.h>
using namespace std;

// it is also called as clockwise rotation of array by one 


void rotate(vector<int> &arr) {
    int num=arr[arr.size()-1];
    
    for(int j=arr.size()-1;j>0;j--)
    {
        arr[j]=arr[j-1];
    }  
    
    arr[0]=num;
    
   
 }
int main()
{
    vector<int>arr={1,2,3,4,5};

    rotate(arr);

    for(auto it:arr)
    {
        cout<<it<<" ";
    }



    return 0;
}