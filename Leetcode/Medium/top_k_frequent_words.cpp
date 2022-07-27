class Solution {
public:
    static bool cmp(pair<string, int>&a, pair<string, int>&b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        return a.second > b.second;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;
        vector<pair<string, int>> v;
        vector<string> ans;
        for(auto i: words){
            mp[i]++;
        }
        for(auto i: mp){
            v.push_back({i.first, i.second});
        }
        sort(v.begin(), v.end(), cmp);
        for(auto i: v){
            if(k==0){
                break;
            }
            ans.push_back(i.first);
            k--;
        }
        return ans;
    }
};
