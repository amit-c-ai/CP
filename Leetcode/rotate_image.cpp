class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size(), temp;
        vector<vector<int>> v(n, vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
