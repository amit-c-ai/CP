class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        int prev=1;
        long long sq;
        for(long long i=2; i<=x/2; i++){
            sq = i*i;
            if(sq == x){
                return i;
            }
            if(sq > x){
                return prev;
            }
            prev = i;
        }
        return prev; 
    }
};
