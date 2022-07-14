class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        vector<int> tofill(2);
        tofill = intervals[0];
        
        for(int i=1; i<n; i++){
            if(tofill[1] >= intervals[i][0]){
                tofill[1] = max(tofill[1], intervals[i][1]);
            }
            else{
                ans.push_back(tofill);
                tofill = intervals[i];
            }
        }
        ans.push_back(tofill);
        return ans;
    }
};
