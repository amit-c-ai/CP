class Solution {
public:
    int climbStairs(int n) {
        if(n<=1){
            return 1;
        }
        int prev = 1, prev2 = 1, ans=0;
        for(int i=2; i<=n; i++){
            ans = prev + prev2;
            prev2 = prev;
            prev = ans;
        }
        return ans;
    }
};
