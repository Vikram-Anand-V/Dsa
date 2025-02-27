
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        
        int count=0;
        
        int n1=n;
        int r;
        if( n>=1&&n<=10^5)
        {
        
        while(n1>0)
        {
            r=n1%10;
            n1=n1/10;
          
            if(r!=0 && n%r==0) count++;
              
        }
        }
    
        return count;
    }
    
};
