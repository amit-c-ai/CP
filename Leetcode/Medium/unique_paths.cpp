class Solution {
public:
    int uniquePaths(int m, int n) {
        int total = m+n-2, r=m-1;
        double numer=1;
        for(int i=1; i<=r; i++){
            numer = numer * (total-r+i)/i;
        }
        return (int)numer;
    }
};
