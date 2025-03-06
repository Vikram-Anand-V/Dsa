#include<bits/stdc++.h>
using namespace std;


bool arraySortedOrNot(vector<int>& arr) {
        
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i+1] >=arr[i]) continue;
        else return false;
    }
    
    return true;
}

int main()
{
    vector<int>arr={1,2,3,4,5};
    bool value=arraySortedOrNot(arr);
    cout<<value;

}