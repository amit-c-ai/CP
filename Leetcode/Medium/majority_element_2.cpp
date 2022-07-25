class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        if(n==1){
            ans.push_back(nums[0]);
            return ans;
        }
        map<int, int> mp;
        for(int i=0; i<n; i++){
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]]=1;
            }
            else{
                mp[nums[i]]++;
            }
            if(mp[nums[i]] > n/3){
                ans.push_back(nums[i]);
                mp[nums[i]]=INT_MIN;
            }
        }
        return ans;       
    }
};
