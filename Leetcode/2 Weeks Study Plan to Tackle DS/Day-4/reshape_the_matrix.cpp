class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int matr=mat.size(), matc=mat[0].size();
        if(matr*matc != r*c){
            return mat;
        }
        queue<int> q;
        vector<vector<int>> ans(r, vector<int>(c));
        for(int i=0; i<matr; i++){
            for(int j=0; j<matc; j++){
                q.push(mat[i][j]);
            }
        }
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                ans[i][j]=q.front();
                q.pop();
            }
        }
        return ans;
    }
};
