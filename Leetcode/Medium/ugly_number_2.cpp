class Solution {
public:
    int nthUglyNumber(int n) {
        unsigned int ugly[n];
        unsigned int i2=0, i3=0, i5=0;
        unsigned nxt_2=2, nxt_3=3, nxt_5=5;
        unsigned nxt_ugly=1;
        ugly[0]=1;
        for(int i=1; i<n; i++){
            nxt_ugly = min(nxt_2, min(nxt_3, nxt_5));
            ugly[i] = nxt_ugly;
            if(nxt_ugly==nxt_2){
                i2++;
                nxt_2 = ugly[i2]*2;
            }
            if(nxt_ugly==nxt_3){
                i3++;
                nxt_3 = ugly[i3]*3;
            }
            if(nxt_ugly==nxt_5){
                i5++;
                nxt_5 = ugly[i5]*5;
            }
        }
        return nxt_ugly;
    }
};
