class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1, mid;
        if(target>nums[high]){
            return high+1;
        }
        if(target<nums[low]){
            return low;
        }
        while(low<=high){
            mid = low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                if(target>nums[mid-1]){
                    return mid;
                }
                else{
                    high=mid-1;
                }
            }
            else{
                if(target<nums[mid+1]){
                    return mid+1;
                }
                else{
                    low = mid+1;
                }
            }
        }
        return 0;
    }
};