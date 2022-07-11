class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(), j=0, count=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                count++;
                nums[j]=nums[i];
                j++;
            }
        }
        for(int k=count; k<n; k++){
            nums[k]=0;
        }
    }
};