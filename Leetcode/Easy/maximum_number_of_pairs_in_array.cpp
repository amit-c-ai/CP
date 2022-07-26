class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int, int> mp;
        int pairs=0, remain=0;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            pairs += i.second/2;
            remain += i.second%2;
        }
        return {pairs, remain};
    }
};
