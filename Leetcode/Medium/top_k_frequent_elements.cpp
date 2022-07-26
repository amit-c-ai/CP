class Solution {
public:
    static bool cmp(pair<int, int>&a, pair<int, int>&b){
        return a.first > b.first;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> ans;
        vector<pair<int, int>> v;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            v.push_back({i.second, i.first});
        }
        sort(v.begin(), v.end(), cmp);
        for(auto i: v){
            if(k==0){
                break;
            }
            ans.push_back(i.second);
            k--;
        }
        return ans;
    }
};
