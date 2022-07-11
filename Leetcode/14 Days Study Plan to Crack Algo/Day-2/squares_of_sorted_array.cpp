class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size(), low=0, high=n-1;
        vector<int> res(n);
        while(low<high && (abs(nums[low])>=abs(nums[low+1]))){
            low++;   
        }
        int j=low+1, k=0;
        while(low>=0 && j<=high){
            if(abs(nums[low])<=abs(nums[j])){
                res[k] = nums[low]*nums[low];
                low--;
            }
            else{
                res[k] = nums[j]*nums[j];
                j++;
            }
            k++;
        }
        while(low>=0){
            res[k] = nums[low]*nums[low];
            low--; k++;
        }
        while(j<=high){
            res[k] = nums[j]*nums[j];
            j++; k++;
        }
        return res;
    }
};