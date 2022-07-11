class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        if(k==0){
            return 0;
        }
        int n=nums.size(), j=0, i=0, len;
        long long count=0, sum=0;
        while(j<n){
            sum += nums[j++];
            len = j-i;
            while((sum*len)>=k){
                sum -= nums[i++];
                len--;
            }
            count += len;
        }
        return count;
    }
};
