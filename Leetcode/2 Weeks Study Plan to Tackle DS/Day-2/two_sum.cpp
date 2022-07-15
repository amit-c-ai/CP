class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> index;
        int n = nums.size(), remain;
        vector<int> ans(2);
        
        for(int i=0; i<n; i++){
            remain = target - nums[i];
            if(index.find(remain) != index.end()){
                ans[0] = i;
                ans[1] = index[remain];
                return ans;
            }
            else{
                index[nums[i]] = i;
            }
        }
        return ans;
    }
};
