class Solution {
public:
    static bool cmp(pair<int, int>&a, pair<int, int>&b){
        if(a.second == b.second){
            return a.first > b.first;
        }
        return a.second < b.second;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;
        vector<pair<int, int>> count;
        int ptr=0, counter;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            count.push_back({i.first, i.second});
        }
        sort(count.begin(), count.end(), cmp);
        for(auto i: count){
            counter = i.second;
            while(counter--){
                nums[ptr]=i.first;
                ptr++;
            }
        }
        return nums;
    }
};
