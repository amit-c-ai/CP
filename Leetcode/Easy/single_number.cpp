class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i, n=nums.size(), x_or=0;
        for(int i=0; i<n; i++){
            x_or = x_or^nums[i];
        }
        return x_or;
    }
};
