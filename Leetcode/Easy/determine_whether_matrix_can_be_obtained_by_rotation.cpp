class Solution {
public:
    bool check(vector<vector<int>> mat, vector<vector<int>> target, int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] != target[i][j]){
                    return false;
                }
            }
        }    
        return true;
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size(), temp;
        if(check(mat, target, n)){
            return true;
        }
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        for(int i=0; i<n; i++){
            reverse(mat[i].begin(), mat[i].end());
        } 
        if(check(mat, target, n)){
            return true;                                                //1
        }

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
        for(int i=0; i<n; i++){
            reverse(mat[i].begin(), mat[i].end());
        } 
        if(check(mat, target, n)){
            return true;                                                //2
        }

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
        for(int i=0; i<n; i++){
            reverse(mat[i].begin(), mat[i].end());
        } 
        if(check(mat, target, n)){
            return true;                                                //3             
        }
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
        for(int i=0; i<n; i++){
            reverse(mat[i].begin(), mat[i].end());
        } 
        if(check(mat, target, n)){
            return true;                                                //4            
        }
        return false;            
    }
}
