class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size(), count=1;
        for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                if(count%2!=0){
                    return false;
                }
                count=1;
            }
        }
        if(count%2!=0){
            return false;
        }
        return true;
    }
};
