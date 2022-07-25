class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(), count=0, element;
        for(int i=0; i<n; i++){
            if(count==0){
                element = nums[i];
            }
            if(nums[i] == element){
                count++;
            }
            else{
                count--;
            }
        }
        return element;
    }
};
