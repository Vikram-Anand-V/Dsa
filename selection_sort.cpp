#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
    int min=0;
    for(int i=0;i<=n-2;i++)
    {
        min=i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(arr[j]<arr[min]) min=j;
        }
        swap(arr[i],arr[min]);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}


void bubble_sort(int arr[],int n)
{

for(int i=n-1;i>0;i--)
{
    for(int j=0;j<i;j++)
    {
        if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
    }

}

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}


void insertion_sort(int arr[],int n )
{
    for(int i=0;i<n;i++)
    {
        int j=i;

        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }     
    }

    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}


}





int main()
{
int arr[]={13,46,24,52,20,9};
int n = sizeof(arr) / sizeof(arr[0]);
bubble_sort(arr,n);

return 0;
}