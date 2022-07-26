class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int n=nums.size(), maxi = INT_MIN, ans=-1;
        unordered_map<int, int> mp;
        for(int i=0; i<n-1; i++){
            if(nums[i]==key){
                mp[nums[i+1]]++;
            }
        }
        for(auto i: mp){
            if(i.second > maxi){
                maxi = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};
