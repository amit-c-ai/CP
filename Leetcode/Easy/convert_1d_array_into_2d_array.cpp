class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int itr=0, len=original.size();
        vector<vector<int>> ans(m, vector<int>(n));
        if(len != m*n){
            return {};
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans[i][j] = original[itr++];
            }
        }
        return ans;
    }
};
