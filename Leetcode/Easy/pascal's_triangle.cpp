class Solution {
public:
    void createPascal(vector<vector<int>> &ans, int numRows){
        if(numRows==0){
            return;
        }
        vector<int> inner;
        int end = ans.size()-1;
        int n = ans[end].size();
        for(int i=0; i<n; i++){
            if(i==0){
                inner.push_back(1);
            }
            if(i==n-1){
                if(!((i-1)<0)){
                    inner.push_back(ans[end][i-1] + ans[end][i]);
                }
                inner.push_back(1);
            }
            if(i!=0 && i!=(n-1)){
                inner.push_back(ans[end][i-1] + ans[end][i]);
            }
        }
        ans.push_back(inner);
        createPascal(ans, --numRows);
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> inner;
        inner.push_back(1);
        ans.push_back(inner);
        if(numRows==1){
            return ans;
        }
        else{
            createPascal(ans, --numRows);
        }
        return ans;
    }
};
