class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0, n=nums.size(), i;
        for(int i=1; i<=n; ++i){ ans ^= i; }
        for(i=0; i<n; ++i){ ans ^= nums[i]; }
        return ans;
    }
};
