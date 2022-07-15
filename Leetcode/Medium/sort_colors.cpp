class Solution {
public: 
    void sortColors(vector<int>& nums) {
        int n=nums.size(), low=0, mid=0, high=n-1;
        for(int i=0; i<n; i++){
            if(mid>high){
                break;
            }
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
                // mid++;
            }
        }
    }
};
