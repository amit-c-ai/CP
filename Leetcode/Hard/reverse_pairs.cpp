class Solution {
public:
    int merge(vector<int>&nums, int low, int mid, int high){   
        int j=mid+1, count=0;
        for(int i=low; i<=mid; i++){
            while(j<=high && nums[i]>2LL*nums[j]){
                j++;
            }
            count += (j-(mid+1));
        }
        
        int left=low, right=mid+1;
        vector<int> temp;
        
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left++]);
            }
            else{
                temp.push_back(nums[right++]);
            }
        }
        while(left<=mid){
            temp.push_back(nums[left++]);
        }
        while(right<=high){
            temp.push_back(nums[right++]);
        }
        
        for(int i=low; i<=high; i++){
            nums[i] = temp[i-low];
        }
        
        return count;
    }
    
    int mergeSort(vector<int>& nums, int low, int high){
        int count=0;
        if(low<high){
            int mid = (high+low)/2;
            count += mergeSort(nums, low, mid);
            count += mergeSort(nums, mid+1, high);
            count += merge(nums, low, mid, high);
        }
        return count;
    }
    
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergeSort(nums, 0, n-1);
    }
};
