class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max=INT_MIN, min=INT_MAX, n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]>max){
                max = nums[i];
            }
            if(nums[i]<min){
                min = nums[i];
            }
        }
        max -= k;
        min += k;
        if(max-min < 0){
            return 0;
        }
        return max-min;
    }
};
