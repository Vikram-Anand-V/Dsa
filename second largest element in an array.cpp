#include<bits/stdc++.h>
uisng namespace std;

// better approach -> find max in 1 loop  and then second_max in another loop
int getSecondLargest(vector<int> &arr) {
      
    if (arr.size()==1)
    {
        return arr[0];
    }
    
    int max=arr[0];
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>max) max=arr[i];
    }
    
    int largest_2=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>largest_2 && arr[i]!=max)
        {
            largest_2=arr[i];
        }
    }
    
    if(largest_2<1) return -1;
    else return largest_2;
    
 } 





//optimal approach takes only 1 pass

int getSecondLargest(vector<int> &arr) {
     
    int largest=arr[0];
    int s_largest=-1;
    
    for(int i=0;i<arr.size();i++)
    {
        if(largest<arr[i])
        {
            s_largest=largest;
            largest=arr[i];
            
        }
        
        if(largest==arr[i])
        continue;
        
        if(largest>arr[i]) 
        {
            if(arr[i]>s_largest) s_largest=arr[i];
        }
    }
    
    return s_largest;
    
 }