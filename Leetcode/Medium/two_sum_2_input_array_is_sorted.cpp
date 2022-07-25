class Solution {
public:   
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0, high=numbers.size()-1, sum;
        vector<int> ans(2);
        while(low<high){
            sum = numbers[low]+numbers[high];
            if(sum==target){
                ans = {low+1, high+1};
                return ans;
            }
            else if(sum<target){
                low++;
            }
            else{
                high--;
            }
        }
        return ans;
    }
};
