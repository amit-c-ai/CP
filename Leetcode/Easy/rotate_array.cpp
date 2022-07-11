class Solution {
public:
    void reverseArray(vector<int>& nums, int i, int j){
        while(i<j){
            swap(nums[i++], nums[j--]);
        }    
    }
    
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k %= n;
        reverseArray(nums, 0, n-k-1);
        reverseArray(nums, n-k, n-1);
        reverseArray(nums, 0, n-1);
    }
};
