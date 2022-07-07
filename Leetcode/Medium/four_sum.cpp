class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size(), low, high, lowElement, highElement;
        long long sum, sum2, target2;
        vector<vector<int>> res;
        if(n==0){
            return res;
        }
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                low=j+1; high=n-1;
                sum = nums[i] + nums[j];
                target2 = target - sum;
                while(low<high){
                    sum2 = nums[low] + nums[high];
                    if(sum2 < target2){
                        low++;
                    }
                    else if(sum2 > target2){
                        high--;
                    }
                    else{
                        lowElement = nums[low];
                        highElement = nums[high];
                        res.push_back({nums[i], nums[j], nums[low], nums[high]});
                        
                        while(low<high && nums[low]==lowElement){
                            low++;
                        }
                        while(low<high && nums[high]==highElement){
                            high--;
                        }
                    }
                }
                while(j+1 < n && nums[j+1]==nums[j]){
                    j++;
                }
            }
            while(i+1 < n && nums[i+1]==nums[i]){
                i++;
            }
        }
        return res;
    }
};
