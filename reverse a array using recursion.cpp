#include <iostream>
using namespace std;
//Function to print array
void printArray(int ans[], int n) {
  cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
}
//Function to reverse array using an auxiliary array
void reverseArray(int i,int arr[], int n) {
           if(i>=n/2) return ;
            
           swap(arr[i],arr[n-i-1]);
           reverseArray(i+1,arr,n);
 
}
int main() {
   int n = 5;
   int arr[] = {5,4,3,2,1};
   reverseArray(0,arr, n);
   printArray(arr,n);
   return 0;
}