#include<bits/stdc++.h>
using namespace std;


        void rotate(vector<int>& nums, int k) 
        {
            int n=nums.size();
    
            int d=k%n;
    
            
            reverse(nums.begin(),nums.begin()+d);
            reverse(nums.begin()+d,nums.end());
            reverse(nums.begin(),nums.end());
        }
    


        /*  this also works
        
                void rotate(vector<int>& nums, int k) 
                {
                    int n=nums.size();
            
                    int d=k%n;
            
                    reverse(nums.begin(),nums.end());
                    reverse(nums.begin(),nums.begin()+d);
                    reverse(nums.begin()+d,nums.end());
                    
            
            
            
                }
        
*/

        int main()
        {
            vector<int >nums={1,2,3,4,5,6,7};

            rotate(nums,5);

            for(auto it:nums)
            {
                cout<<it<<" ";
            }
            return 0;
        }
    
   