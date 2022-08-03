class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<2){
            return true;
        }
        long long sq;
        for(long long i=1; i<=num/2; i++){
            sq = i*i;
            if(sq == num){
                return true;
            }
            else if(sq>num){
                return false;
            }
        }
        return false;
    }
};
