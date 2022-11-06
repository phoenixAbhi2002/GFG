
class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        if(n==0)
            return false;

        if(n==1 || n==2)
            return true;
            
        else{
            while(n>2){
                if(n%2==0)
                    n=n/2;
                else 
                    return false;
            }
        }
        return true;
    }
};
