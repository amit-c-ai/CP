class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int low, int high){
        int mid;
        while(low<=high){
            mid = low + (high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(target<nums[mid]){
                return binarySearch(nums, target, low, mid-1);
            }
            return binarySearch(nums, target, mid+1, high);
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return binarySearch(nums, target, 0, n-1);
    }
};
