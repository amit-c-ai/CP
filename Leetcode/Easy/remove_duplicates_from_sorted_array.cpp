class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), low=1, same=1, flag=0;
        if(n<=1){
            return n;
        }
        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]){
                flag=1;
                nums[low] = nums[i];
                if(i != n-1){
                    low++;   
                }
                same = 1;
            }
            else if(i==n-1){
                low--;
            }
        }
        return (flag!=1)?1:low+1;
    }
};
