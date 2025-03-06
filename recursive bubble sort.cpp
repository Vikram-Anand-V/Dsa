#include<bits/stdc++.h>
using namespace std;

void recursive_bubble_sort(int arr[],int n)
{
    if(n==1) return ;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    recursive_bubble_sort(arr,n-1);
}

int main()
{
    int arr[]={3,2,7,4,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);

    recursive_bubble_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}