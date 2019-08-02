class Solution {
public:
    int Fibonacci(int n) {
        int result[2]={0,1};
        if(n<2)
            return result[n];
        int FibNMinusOne=1;
        int FibNMinusTwo=0;
        int FibNMinusN=0;
        
        for(int i=2;i<=n;i++)
        {
            FibNMinusN=FibNMinusTwo+FibNMinusOne;
            FibNMinusTwo=FibNMinusOne;
            FibNMinusOne=FibNMinusN;
        }
        
        return FibNMinusN;
    }
};