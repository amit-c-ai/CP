class Solution {
public:
    bool validSides(int a, int b, int c){
        if((a+b > c) && (b+c > a) && (a+c > b)){
            return true;
        }
        return false;
    }
    
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=nums.size()-1; i>=2; i--){
            if(validSides(nums[i], nums[i-1], nums[i-2])){
                return nums[i]+nums[i-1]+nums[i-2];
            }
        }
        return 0;
    }
};