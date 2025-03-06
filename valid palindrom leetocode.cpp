#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
        bool f(int i,string &s,int n)
        {
            if(i>=n/2) return true;
    
            if(s[i]!=s[n-i-1]) return false;
    
            return f(i+1,s,n);
        }
     
        bool isPalindrome(string s) {
            
            int n=s.length();
    
            for(int i=0;i<n;i++)
            {
                s[i]=tolower(s[i]);
            }
    
            string ans = "";
            for (auto ch : s) {
            
            if (isalpha(ch)||isdigit(ch))
                ans += ch;
            } 
            s=ans;
             s.erase(remove(s.begin(), s.end(), ' '), s.end()); 
                  
             
            
        
            return f(0,s,s.size());  
        }
    };