class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        return (a[0]*a[0] + a[1]*a[1]) < (b[0]*b[0] + b[1]*b[1]);
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(), points.end(), cmp);
        vector<vector<int>> ans;
        for(auto i: points){
            if(k==0){
                break;
            }
            ans.push_back(i);
            k--;
        }
        return ans;
    }
};
